Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim d As Integer = ListBox1.SelectedIndex()
        Me.Text = ListBox1.SelectedIndex().ToString
        ListBox1.Items.RemoveAt(d)

    End Sub
End Class
