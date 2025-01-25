import java.util.*;


class Program266
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        ArrayXX obj = new ArrayXX(iSize);
        
        obj.Accept();
        obj.Display();

        int iRet = obj.Difference();
        System.out.println("Summation of even and odd elements is: "+iRet);
       
    } 
}

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class ArrayXX extends ArrayX
{
    public ArrayXX(int iSize)
    {
        super(iSize);
    }

    public int Difference()
    {
        int O_Sum = 0, E_Sum = 0;

        for(int i = 0; i < Arr.length;i++)
        {
            if(Arr[i] % 2 == 0)
            {
                E_Sum = E_Sum + Arr[i];
            }
            if(Arr[i] % 2 != 0)
            {
                O_Sum = O_Sum + Arr[i];
            }
        }
        return(E_Sum-O_Sum);
    }
}