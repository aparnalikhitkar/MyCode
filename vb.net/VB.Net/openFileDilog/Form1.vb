Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        OpenFileDialog1.Filter = "txt files(*.txt)|*.txt"
        Dim Pic As Image
        Pic = PictureBox1.Image
        Image.FromFile("C:\Images\2.jpg")
        PictureBox1.Image = Image.FromFile("C:\Images\2.jpg")



        If OpenFileDialog1.ShowDialog = Windows.Forms.DialogResult.OK Then
            ' PictureBox1.ImageLocation(OpenFileDialog1.FileName)
        End If
    End Sub

    Private Sub ComboBox2_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ComboBox2.SelectedIndexChanged

    End Sub
End Class
