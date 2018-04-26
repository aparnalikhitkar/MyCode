Imports System.Collections
Module Module1

    Sub Main()
        Dim s As New Collection
        s.Add("b", 2)
        s.Add("a", 1)
        s.Add("d", 4)
        s.Add("c", 3)
        Dim x As Int16 = s.Count()
        Dim a As Boolean = s.Contains(5)
        Dim dd As Object = s.Item("13")
        For Each v As String In s
            Console.WriteLine(v)
        Next

    End Sub

End Module
