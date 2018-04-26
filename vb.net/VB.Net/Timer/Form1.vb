Public Class Form1
    Private Sub Enable_Click(sender As Object, e As EventArgs) Handles Enable.Click
        ' ListBox1.Items.Clear()
        MyTimer.Enabled = True
    End Sub

    Private Sub Disable_Click(sender As Object, e As EventArgs) Handles Disable.Click
        MyTimer.Enabled = False
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim val As Integer = Integer.Parse(TextBox1.Text)
        MyTimer.Interval = val
    End Sub

    Private Sub MyTimer_Tick(sender As Object, e As EventArgs) Handles MyTimer.Tick

        'ListBox1.set

        ListBox1.Items.Add(Now().ToString())
        Me.Text = Now().ToString() + "    " + ListBox1.Items.Count().ToString()
    End Sub

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim i As Integer = ListBox1.SelectedIndex()
        Me.Text = ListBox1.SelectedItem().ToString()
        ListBox1.Items.RemoveAt(i)

    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub
End Class
