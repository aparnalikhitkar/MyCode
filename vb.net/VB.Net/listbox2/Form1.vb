Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        ListBox1.Items.Add(TextBox1.Text)
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        ListBox2.Items.Add(TextBox2.Text)
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click


        If ListBox1.SelectedIndex > -1 Then
            'Dim a As Integer = ListBox1.SelectedIndex
            Dim b As Object = ListBox1.SelectedItem
            ListBox2.Items.Add(b)
            ListBox1.SelectedItem.RemoveAt(b)
        End If

    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click

        ListBox2.Items.Add(ListBox1.Text)

    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        If ListBox2.SelectedIndex > -1 Then
            Dim b As Object = ListBox2.SelectedItem
            ListBox1.Items.Add(b)
        End If
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        ListBox1.Items.Add(ListBox2.Items)
    End Sub
End Class
