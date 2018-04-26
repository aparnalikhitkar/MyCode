Public Class Form1
    Private Sub SaveAsToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles SaveAsToolStripMenuItem.Click

    End Sub

    Private Sub OpenToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles OpenToolStripMenuItem.Click
        OpenFileDialog1.Filter = "txt files(*.txt)|*.txt"
        If OpenFileDialog1.ShowDialog = Windows.Forms.DialogResult.OK Then
            RichTextBox1.Text = My.Computer.FileSystem.ReadAllText(OpenFileDialog1.FileName)
        End If

    End Sub

    Private Sub SaveToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles SaveToolStripMenuItem.Click
        SaveFileDialog1.Filter = "txt files(*.txt)|*.txt"
        If SaveFileDialog1.ShowDialog = Windows.Forms.DialogResult.OK Then
            'RichTextBox1.Text = My.Computer.FileSystem.WriteAllText(SaveFileDialog1.FileName)
            My.Computer.FileSystem.WriteAllText(SaveFileDialog1.FileName, RichTextBox1.Text, True)
        End If
    End Sub

    Private Sub ExitToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem.Click
        Application.Exit()
    End Sub

    Private Sub OneToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles OneToolStripMenuItem.Click

    End Sub

    Private Sub TwoToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles TwoToolStripMenuItem.Click

    End Sub

    Private Sub Form1_MouseDown(sender As Object, e As MouseEventArgs) Handles MyBase.MouseDown
        Me.ContextMenuStrip = ContextMenuStrip1
    End Sub

    Private Sub Form1_MouseMove(sender As Object, e As MouseEventArgs) Handles MyBase.MouseMove
        StatusStrip1.Text = e.X.ToString() + "   " + e.Y.ToString()
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs)

    End Sub

    Private Sub ToolStripButton2_Click(sender As Object, e As EventArgs) Handles ToolStripButton2.Click
        Me.Text = "Helo"
    End Sub
End Class
