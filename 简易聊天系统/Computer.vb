Imports System.Net                      'TcpClient
Imports System.Net.Sockets              'TcpClient
Imports System.Text                     'Encoding
Imports System.Math
Imports System
Imports System.IO
Imports Microsoft.VisualBasic
Imports System.Threading
Imports test123.Form1

Module ModLAN
    Public t1 As String
    Public t2 As String
    Public NetStream As NetworkStream '作为客户端
    Public Check As Integer
    Public MsgBuf As String '接受的字符
    Public strMsg As String '
    Public serverThread As Thread
    Public tcpListener As TcpListener
    Public netStream1 As NetworkStream '作为服务器
    Public rdStream As StreamReader
    Public wtStream As StreamWriter
    Public clientSocket As TcpClient
    Public Win As Boolean = False
    Public fs As Stream = Nothing
    Public ws As Stream = Nothing
    Public Sub InitLAN(ByVal IPAddr As String, ByVal IPPort As Integer)
        Try
            Dim Client As New TcpClient(IPAddr, IPPort)  'Set Tcp Client

            NetStream = Client.GetStream()                     'Open Tcp Client

        Catch ex As Exception
            MsgBox("与服务器连接异常：" & ex.Message)
            Form1.Close()
        End Try
    End Sub

    Public Sub SendMsgCrLf(ByVal strMsg As String)
        If Win = False Then
            strMsg = strMsg & vbCrLf
            NetStream.Write(Encoding.Default.GetBytes(strMsg), 0, strMsg.Length)            'send message
        Else
            strMsg = strMsg & vbCrLf
            netStream1.Write(Encoding.Default.GetBytes(strMsg), 0, strMsg.Length)
        End If


    End Sub
    Public Sub GetMsgCrLf()
        '598
        'strMsg = strMsg & vbCrLf
        'NetStream.Write(Encoding.ASCII.GetBytes(strMsg), 0, strMsg.Length)            'send message
        MsgBuf = Nothing
        Dim s As String
        Dim size As String
        Dim buf(500) As Byte
        Dim r As Integer = 0

        'Do
        '    wait receive command
        '    If NetStream.DataAvailable = True Then
        '        size = NetStream.Read(buf, 0, buf.Length)
        '        If Chr(Check) = vbLf Then
        '            MsgBuf = MsgBuf & Chr(Check)
        '            Exit Do
        '        ElseIf Chr(Check) = vbCr Then
        '            MsgBuf = MsgBuf & Chr(Check)
        '        Else
        '            s = Encoding.Default.GetString(buf, 0, size)
        '            MsgBuf = s
        '        End If
        '    End If
        'Loop
        While True
            Dim bitLen(8) As Byte
            ' NetStream.Read(bitLen, 0, bitLen.Length)
            '第一步接收文件的大小  
            Dim contentLen As Long = BitConverter.ToInt64(bitLen, 0)
            Dim s1 As Integer = 0
            Dim ms As MemoryStream = New MemoryStream()
            If NetStream.DataAvailable = True Then
                Dim dlg2 As SaveFileDialog = New SaveFileDialog()
                ' dlg2.ShowDialog()
                '  = New File("C:\Users\Liuzhengjun\Desktop\vents.txt")
                ' Dim sw As Stream = File.Create()
                Dim recfs As New IO.FileStream("C:\Users\Liuzhengjun\Desktop\vents.png", IO.FileMode.OpenOrCreate)
                '’接收数据并将其保存到一个新的文件中
                'Dim recbyte(229888) As Byte
                Dim newfilestr As New IO.BinaryWriter(recfs) '’流写 
                '’recfs.Write(recbyte, 0, recbyte.Length - 1)
                'newfilestr.Write(recbyte, 0, recbyte.Length - 1)
                Do
                    Dim bits(229888) As Byte
                    If NetStream.DataAvailable = False Then
                        GoTo ErrHandle
                    End If
                    r = NetStream.Read(bits, 0, bits.Length)
                    newfilestr.Write(bits, 0, bits.Length)
                    s1 += r
                Loop
ErrHandle:
            End If
            'wangle(ms)
        End While

        MsgBuf = MsgBuf & vbCrLf

    End Sub
    Public Sub wangle(ByVal ms As MemoryStream)
        '  System.Drawing.Image bm = System.Drawing.Image.FromStream(ms, true); 
        'Image(img = Image.FromStream(ms))
        ''picBox.Image = null
        ''picBox.Image = img
        Dim img As Image = Image.FromStream(ms)
        Form3.picBox.Image = img
    End Sub
    Public Sub Listen()
        Dim clientMsg As String
        Dim size As String = ""
        Dim buf(50) As Byte
        tcpListener = New TcpListener(IPAddress.Parse("172.20.72.88"), 52001)
        Try
            tcpListener.Start()
            clientSocket = tcpListener.AcceptTcpClient()
            If clientSocket.Connected Then
                netStream1 = clientSocket.GetStream()
                Win = True
            End If

            While (True)
                If netStream1.DataAvailable = True Then
                    size = netStream1.Read(buf, 0, buf.Length)
                    clientMsg = Encoding.Default.GetString(buf, 0, size)
                    MsgBuf = clientMsg
                    ' MessageBox.Show(MsgBuf)
                    If clientMsg = "Exit" Then
                        Exit Sub
                    End If
                End If
            End While
        Catch ex As SocketException
            MessageBox.Show("无法打开端口")
        Catch ex As IOException
        Catch ex As ThreadAbortException
        Catch ex As Exception
            MessageBox.Show(ex.Message)
        End Try
    End Sub
    Private Sub EndListen()
        If (Not NetStream Is Nothing) Then
            serverThread.Abort()
            tcpListener.Stop()
        End If
    End Sub
End Module
