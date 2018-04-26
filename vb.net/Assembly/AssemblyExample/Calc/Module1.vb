Imports MathLib.Aparna
Module Module1

    Sub Main()
        Dim x As New MathLib.Aparna.MyMathLib
        Dim a As Integer = 80
        Dim b As Integer = 40
        Dim mobj As New MyMathLib

        System.Console.WriteLine("Addition of a+b is         " + x.Add(a, b).ToString())
        System.Console.WriteLine("Substruction of a-b is     " + x.Subx(a, b).ToString())
        System.Console.WriteLine("Multiplication of a*b is   " + x.Mul(a, b).ToString())
        System.Console.WriteLine("Div of a/b is              " + x.Div(a, b).ToString())

        System.Console.Read()
    End Sub

End Module
