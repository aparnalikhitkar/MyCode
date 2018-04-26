Module Test
    Sub fun(Optional ByRef a As Integer = 500)
        a = a + a

        Console.WriteLine("addition of two number " + a.ToString())
    End Sub


    Sub Main()
        fun()
        fun(20)
        Console.ReadKey()


    End Sub

End Module
