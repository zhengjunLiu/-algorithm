Public Class Form2

    Private Sub ListBox1_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListBox1.MouseHover

    End Sub

    Private Sub VScrollBar1_Scroll(ByVal sender As System.Object, ByVal e As System.Windows.Forms.ScrollEventArgs)

    End Sub

    Private Sub VScrollBar1_Scroll_1(ByVal sender As System.Object, ByVal e As System.Windows.Forms.ScrollEventArgs)

    End Sub

    Private Sub ListBox1_DoubleClick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListBox1.DoubleClick
        Me.Text = t2
        InitLAN("172.20.65.117", 1000)
        Dim GetStart As New Threading.Thread(AddressOf GetMsgCrLf)
        GetStart.Start()
        Form1.Show()
    End Sub
    Private Sub ListBox1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListBox1.Click
        t1 = Me.ListBox1.SelectedIndex
        t2 = Me.ListBox1.SelectedItem.ToString
        'If  t1==1 then
        '    t2 = Me.ListBox1.SelectedItem.ToString
        'End If
        ToolTip1.SetToolTip(ListBox1, t1 + " " + t2)
    End Sub

   
    Private Sub Form2_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim ListenStart As New Threading.Thread(AddressOf Listen)
        ListenStart.Start()
    End Sub

    Private Sub Timer2_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer2.Tick
        If Win = True Then
            Form1.Text = "机器人1号"
            Form1.Show()
        End If
    End Sub
End Class