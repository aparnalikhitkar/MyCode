﻿Module Module1

    Sub Main()
        Dim strarray As String() = {"Down the way where the nights are gay", "And the sun shines daily on the mountain top",
                           "I took a trip on a sailing ship", "And when I reached Jamaica", "I made a stop"}
        Dim str As String = String.Join(vbCrLf, strarray)
        Console.WriteLine(str)
        Console.ReadLine()
    End Sub

End Module
