Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        'create two scroll bars
        Dim hs As HScrollBar
        Dim vs As VScrollBar
        hs = New HScrollBar()
        vs = New VScrollBar()
        'set properties
        hs.Location = New Point(10, 200)
        hs.Size = New Size(175, 15)
        hs.Value = 50
        vs.Location = New Point(200, 30)
        vs.Size = New Size(15, 175)
        hs.Value = 50
        'adding the scroll bars to the form
        Me.Controls.Add(hs)
        Me.Controls.Add(vs)
        ' Set the caption bar text of the form.  
        Me.Text = "tutorialspoint.com"
    End Sub
End Class
