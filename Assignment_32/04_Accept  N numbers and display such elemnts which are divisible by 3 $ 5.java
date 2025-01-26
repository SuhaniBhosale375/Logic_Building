import java.util.*;


class Program266
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        ArrayX obj = new ArrayX(iSize);
        
        obj.Accept();

        obj.Display();
    } 
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 3)== 0))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }

    }
}
