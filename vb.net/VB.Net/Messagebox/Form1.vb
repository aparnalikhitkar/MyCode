
Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        'System.Windows.Forms.MessageBox.Show("Hello World", "Title", MessageBoxButtons.AbortRetryIgnore, MessageBoxIcon.Warning, MessageBoxDefaultButton.Button2)
        Dim StatusDate = InputBox("What status date do you want to pull?", "Enter Status Date", "******")
    End Sub
End Class
