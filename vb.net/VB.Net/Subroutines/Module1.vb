Module module1
    Sub fun(a As Integer)
        a = a * 10
        Console.WriteLine(" function value " + a.ToString())
    End Sub
    Sub fun2(ByRef a As Integer)
        a = a * 10
        Console.WriteLine("function 2 byref " + a.ToString())

    End Sub
    Sub fun3(ByVal a As Integer)
        a = a * 10
        Console.WriteLine("function 3 by value " + a.ToString())

    End Sub

    Sub Main()

        Dim val As Integer = 300
        fun(100)
        fun2(200)
        fun3(val)
        Console.ReadKey()

    End Sub

End Module
