Public Class MyForm
    Private Sub MyButton_Click(sender As Object, e As EventArgs) Handles MyButton.Click
        Dim val As String = txtName.Text

        If val.Length() <= 0 Then
            MessageBox.Show("Please enter a name")
        Else
            MessageBox.Show("Hello " + val)
            MyButton.Text = val
        End If
        MyButton.Visible = False


    End Sub

    Private Sub txtName_Leave(sender As Object, e As EventArgs) Handles txtName.Leave
        Dim val As String = txtName.Text

        If val.Length() <= 0 Then
            MessageBox.Show("Please enter a name")
            txtName.Select()
        End If
    End Sub

    Private Sub MyForm_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub
End Class
