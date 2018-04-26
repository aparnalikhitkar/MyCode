Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As String
        a = InputBox("Enter your name ")
        If TreeView1.SelectedNode Is Nothing Then
            TreeView1.Nodes.Add(a, "s")
        Else
            TreeView1.SelectedNode.Nodes.Add(a, "b")
        End If
    End Sub
End Class
