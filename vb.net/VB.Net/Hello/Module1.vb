Module Module1
    Sub foo()
        Console.Write("hello from foo")
        Console.Write("Hello From foo")
    End Sub

    Sub Main()
        For a = 3 To 10
            Console.WriteLine("hello from foo " + a.ToString())

        Next
        Dim i As Integer = 3

        Do
            Console.WriteLine("Hello ")
            If i = 10 Then
                Exit Do
            End If
            i = i + 1


        Loop

        Do
            Console.WriteLine("BYE")
        Loop While i = 1

        Do While i <= 10
            Console.WriteLine("Bye")
            i = i + 1
        Loop


        Dim arr As Integer() = {1, 2, 3, 34, 56, 67, 3, 4}
        Dim k As Integer
        For Each k In arr
            ' During each iteration of the For Each loop, i will assume one of three values:
            ' 1, 2, or 3 as integers.
            Console.WriteLine(k)
        Next k



        Console.ReadKey()
    End Sub

End Module
