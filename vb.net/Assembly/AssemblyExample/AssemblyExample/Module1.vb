Imports MathLib.Aparna
Imports Math
Module Module1
    Sub Main()

        Dim a As Integer = 80
        Dim b As Integer = 40
        Dim mobj As New MyMathLib
        Dim dd As New Math.Math
        System.Console.WriteLine(dd.add(20, 20).ToString())

        System.Console.WriteLine("Addition of a+b is         " + mobj.Add(a, b).ToString())
        System.Console.WriteLine("Substruction of a-b is     " + mobj.Subx(a, b).ToString())
        System.Console.WriteLine("Multiplication of a*b is   " + mobj.Mul(a, b).ToString())
        System.Console.WriteLine("Div of a/b is              " + mobj.Div(a, b).ToString())

        System.Console.Read()

    End Sub

End Module
