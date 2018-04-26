Module Module1
    Function Square(ByVal x As Decimal) As Decimal

        Return x * x

    End Function

    Sub Main()
        Dim a As Integer = 4
        Dim b As Integer

        b = Square(a)
        Console.Write("square of number is" + b.ToString)

        Console.ReadKey()

    End Sub

End Module
