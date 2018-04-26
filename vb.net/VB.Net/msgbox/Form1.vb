Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        MessageBox.Show("Hiiii World", "Hello", MessageBoxButtons.AbortRetryIgnore, MessageBoxIcon.Error, MessageBoxDefaultButton.Button2)
    End Sub



    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Dim result2 As DialogResult = MessageBox.Show("press any button", "botton 2", MessageBoxButtons.YesNo, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1)

        If result2 = MsgBoxResult.No Then
            Me.Text = "Cancel"
        Else
            Me.Text = "ok"
        End If

    End Sub
End Class
