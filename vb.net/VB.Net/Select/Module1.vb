Module Module1

    Sub Main()
        Dim i As String = Console.ReadLine()

        Dim a As Integer = Integer.Parse(i)
        Select Case a

            Case 1
                Console.WriteLine("Hello....")
            Case 2
                Console.WriteLine("Hey  ")
            Case 3
                Console.WriteLine("Bye  ")
            Case 4, 5

                Console.WriteLine("aaaa")
                Console.WriteLine("fff")
            Case Else
                Console.WriteLine("BYe bye")

        End Select

        Console.ReadKey()

    End Sub

End Module
