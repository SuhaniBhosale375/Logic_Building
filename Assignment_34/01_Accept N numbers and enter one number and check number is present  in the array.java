import java.util.*;

class Program261
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that we want to create :");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number that we want to check present or not: :");
        int No = sobj.nextInt();

        Number obj = new Number(iSize);
        
        obj.Accept();
        obj.Display();

        boolean bRet = obj.Check(No);

        if(bRet == true)
        {
            System.out.println("Given number is present in the array");
        }
        else
        {
            System.out.println("Given number is not present in the array");
        }
    }
}
class Number
{
    public int Arr[];
    boolean flag = false;
    
    public Number(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length+" elements");

        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println("Element no :"+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }

    }
    public void Display()
    {
        System.out.println("Elements of the Array are :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public boolean Check(int No)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
}