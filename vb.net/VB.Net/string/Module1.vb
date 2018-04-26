Module stringss

    Sub Main()
        Dim string1, string2 As String
        string1 = " aparna "
        string2 = "Hello ....."
        If (String.Compare(string1, string2) = 0) Then
            Console.WriteLine(string1 + "and" + string2 + "is equal")
        Else
            Console.WriteLine((string1 + "and" + string2 + "is not equal"))
        End If
        Console.ReadKey()

    End Sub

End Module
'Comparing Strings