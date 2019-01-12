

Module timestable
  Sub Main()

    dim number as integer
    dim startp as integer
    dim endp as integer
      
    Console.WriteLine("Which number ")
    number = Console.ReadLine()
    
    Console.WriteLine("Start at ")
    startp = Console.ReadLine() 

    Console.WriteLine("End at ")
    endp = Console.ReadLine()

    dim countp as integer

    countp = startp

    while (countp <= endp)
        Console.WriteLine(CStr(number) + "*" + CStr(countp) + "=" + CStr(number * countp))
        countp = countp + 1
    End while

  End Sub 
End Module
    

