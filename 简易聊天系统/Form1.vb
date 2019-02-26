Imports System.IO
Imports System.Threading
Imports System.Net
Imports System.Net.Sockets
Public Class Form1


    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub

    Private Sub send_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles send.Click

        SendMsgCrLf(SendMessage.Text.ToString)
        receive.AppendText("我:" + vbCrLf + SendMessage.Text.ToString + vbCrLf)

    End Sub

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        If MsgBuf <> "" Then
            If Win = False Then
                receive.Text = receive.Text + t2 + ":" + vbCrLf + MsgBuf + vbCrLf
                MsgBuf = Nothing
            Else
                receive.Text = receive.Text + "机器人一号:" + vbCrLf + MsgBuf + vbCrLf
                MsgBuf = Nothing
            End If
        End If
    End Sub
    Private Sub Form1_FormClosed(ByVal sender As System.Object, ByVal e As System.Windows.Forms.FormClosedEventArgs) Handles MyBase.FormClosed
        Win = False
    End Sub

    Private Sub SaveFileDialog1_FileOk(ByVal sender As System.Object, ByVal e As System.ComponentModel.CancelEventArgs) Handles dlg2.FileOk

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim nameLen As Integer = 0
        'List<byte> name;  
        'long contentLen = 0;  
        'List<byte> content;  
        ' dlg.Filter = "只能发送图片文件|*.png;*.jpg;*.gif|All Files|*.*"
        If DialogResult.OK = dlg.ShowDialog() Then
            'fs = dlg.OpenFile()
            txtPath.Text = dlg.FileName
            Dim fs As New IO.FileStream(txtPath.Text, IO.FileMode.OpenOrCreate, IO.FileAccess.Read) '’要传输的文件 
            '文件名长度  
            nameLen = Path.GetFileName(dlg.FileName).Length
            '文件名内容  
            Dim encoding As System.Text.Encoding
            encoding = System.Text.Encoding.UTF8
            'NetStream.Write(BitConverter.GetBytes(fs.Length), 0, fs.Length)
            While (True)

                Dim bits(256) As Byte
                Dim r As Integer = fs.Read(bits, 0, bits.Length)
                If r <= 0 Then
                    Exit While
                End If 
                NetStream.Write(bits, 0, bits.Length)
            End While
            fs.Position = 0
        End If
    End Sub
End Class
