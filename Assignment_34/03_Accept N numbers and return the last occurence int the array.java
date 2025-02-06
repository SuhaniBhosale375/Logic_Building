import java.util.*;

class Program261
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that we want to create :");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number that we want to check last occurence: :");
        int No = sobj.nextInt();

        Number obj = new Number(iSize);
        
        obj.Accept();
        obj.Display();

        int index = obj.LastOcuurence(No);

        System.out.println("Last occurence is : "+index);
    }
}
class Number
{
    public int Arr[];
    
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

    public int LastOcuurence(int No)
    {
        int index = Arr[0];
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                index = iCnt;
            }
            
        }
        return index;

    }
}