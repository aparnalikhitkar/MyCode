Imports System.Threading
Public Class Form1
    Private Sub Form1_Activated(sender As Object, e As EventArgs) Handles MyBase.Activated
        System.Diagnostics.Debug.WriteLine("Activated...")

    End Sub

    Private Sub Form1_Click(sender As Object, e As EventArgs) Handles MyBase.Click
        System.Diagnostics.Debug.WriteLine("Clicked...")


    End Sub

    Private Sub Form1_MouseMove(sender As Object, e As MouseEventArgs) Handles MyBase.MouseMove
        Me.Text = e.Location.X.ToString + " , " + e.Location.Y.ToString
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        'Me.CenterToScreen()
        '  TextBox1.BackColor = Color.Red
        ' TextBox1.ForeColor = Color.Gray
        'TextBox1.BorderStyle = BorderStyle.Fixed3D
        'TextBox1.Clear()
        TextBox1.ResetText()

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Me.Close()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Button2.Hide()
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Form2.Show()
        Thread.Sleep(2000)
        Form2.Button1.Text = "hhhhhhh"
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs)
        ProgressBar1.Increment(10)
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ProgressBar1.Increment(50)
        Button2.Text = "xyz"
    End Sub



    Private Sub TextBox1_Click(sender As Object, e As EventArgs) Handles TextBox1.Click

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub Label1_MouseEnter(sender As Object, e As EventArgs) Handles Label1.MouseEnter
        Label1.Font = New Font(Label1.Font, FontStyle.Bold)
        Label1.ForeColor = Color.Red
        Me.Text = Label1.Text
    End Sub

    Private Sub Label1_MouseLeave(sender As Object, e As EventArgs) Handles Label1.MouseLeave
        Label1.Font = New Font(Label1.Font, FontStyle.Regular)
        Label1.ForeColor = Color.Black
        Label1.Text = "Pankaj"
    End Sub
End Class
