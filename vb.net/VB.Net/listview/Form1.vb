Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As ListViewItem
        a = ListView1.Items.Add(TextBox1.Text)
        a.SubItems.Add(TextBox2.Text)
        a.SubItems.Add(TextBox3.Text)
        a.SubItems.Add(TextBox4.Text)

    End Sub
End Class
