Imports System.Data.OleDb
Module Module1

    Sub Main()
        Dim conn As OleDbConnection = New OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\Users\Aparna\My Workspace\MyCode\vb.net\DBTest\MyDatabase.accdb;User Id=admin; Password=;")
        Dim ds As New DataSet()
        Dim da As New OleDbDataAdapter("select * from student", conn)
        Dim f As New OleDbDataAdapter("INSERT INTO Student([rollno], [Name], [age],[city])VALUES('6','aparna','18','pune')", conn)

        da.Fill(ds)

        For Each Row As DataRow In ds.Tables(0).Rows
            System.Console.Write(Row.Item("rollno").ToString() + "      ")
            System.Console.Write(Row.Item("Name").ToString() + "      ")
            System.Console.Write(Row.Item("age").ToString() + "      ")
            System.Console.WriteLine(Row.Item("city").ToString())
        Next


        Console.ReadKey()
    End Sub

End Module
