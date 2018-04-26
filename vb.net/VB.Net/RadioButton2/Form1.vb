Public Class Form1

    Private Sub RadioButton1_Click(sender As Object, e As EventArgs) Handles RadioButton1.Click
        'RadioButton1.Checked = True
    End Sub

    Private Sub RadioButton1_CheckedChanged(sender As Object, e As EventArgs) Handles RadioButton1.CheckedChanged

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If RadioButton1.Checked = True Then
            MsgBox("You are selected Red !! ")
            Exit Sub
        ElseIf RadioButton2.Checked = True Then
            MsgBox("You are selected green !! ")
            Exit Sub
        Else
            MsgBox("You are selected blue !! ")
            Exit Sub
        End If
    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        Me.Text = Now().ToString()
    End Sub

    Private Sub LinkLabel1_LinkClicked(sender As Object, e As LinkLabelLinkClickedEventArgs) Handles LinkLabel1.LinkClicked
        MsgBox("You are selected blue !! ")
    End Sub
End Class
