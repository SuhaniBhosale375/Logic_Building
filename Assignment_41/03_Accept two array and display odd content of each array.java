import java.util.*;

class Prog41_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        MyArray obj = new MyArray();

        System.out.println("Enter the size for first array :");
        int iSize1 = sobj.nextInt();
        int Arr1[] = new int[iSize1];

        System.out.println("Enter the size for second array :");
        int iSize2 = sobj.nextInt();
        int Arr2[] = new int[iSize2];

        System.out.println("Enter the elements for first Array");
        for(int i = 0; i < Arr1.length;i++)
        {
            Arr1[i] = sobj.nextInt();
        }
        
        System.out.println("Enter the elements for second Array");
        for(int i = 0; i < Arr2.length;i++)
        {
            Arr2[i] = sobj.nextInt();
        }

        obj.DisplayOdd(Arr1,Arr2);
    }
}

class MyArray
{
    public void DisplayOdd(int Arr1[],int Arr2[])
    {
        for(int i = 0; i < Arr1.length;i++)
        {
            if((Arr1[i] % 2) != 0)
            {
                System.out.print(Arr1[i]+"\t");
            }
        }
        System.out.println();

        for(int i = 0; i < Arr2.length;i++)
        {
            if((Arr2[i] % 2) != 0)
            {
                System.out.print(Arr2[i]+"\t");
            }
        }
    }
}