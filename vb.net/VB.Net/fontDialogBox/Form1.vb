Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If FontDialog1.ShowDialog = Windows.Forms.DialogResult.OK Then
            ' RichTextBox1.ForeColor = FontDialog1.Color
            RichTextBox1.Font = FontDialog1.Font
        End If
    End Sub

    Private Sub RichTextBox1_TextChanged(sender As Object, e As EventArgs) Handles RichTextBox1.TextChanged

    End Sub
End Class
