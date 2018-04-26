Module ModuleAparna
    Dim y As Integer = 20
    Sub foo(Optional ByRef a As Integer = 500)
        a = a * 10
        Console.WriteLine("Inside foo " + a.ToString())
    End Sub
    Function Add(a As Integer, b As Integer) As Integer
        a = a + 10
        b = b + 40
        If a > b Then
            a = 40
        Else
            b = 60
        End If
        Add = a + b
    End Function



    Sub Main()

        MessageBox.Show
        Dim age As Integer
        Console.WriteLine("Please enter your age:")
        age = Console.ReadLine().ToString()


        If age >= 18 Then
            System.Console.WriteLine("you can vote")

        Else
            Console.WriteLine("You can not vote")

        End If
        Dim val As Integer = 300
        Console.WriteLine("Before foo call " + val.ToString())
        foo()
        foo(val)
        Dim c As Integer = Add(12, 18)
        Console.WriteLine("after foo call " + val.ToString())
        Console.ReadKey()
    End Sub

End Module
