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

        System.out.println("Enter the elements for First Array");
        {
            for(int i = 0; i < Arr1.length;i++)
            Arr1[i] = sobj.nextInt();
        }
        
        System.out.println("Enter the elements for second Array");
        for(int i = 0; i < Arr2.length;i++)
        {
            Arr2[i] = sobj.nextInt();
        }

        obj.ArrayConcate(Arr1,iSize1,Arr2,iSize2);
    }
}

class MyArray
{
    public void ArrayConcate(int Arr1[],int iSize1,int Arr2[],int iSize2)
    {
        int Brr[] = new int[iSize1+iSize2];

        for(int i = 0; i < iSize1; i++)
        {
            Brr[i] = Arr1[i];
        }
        for(int j = 0; j < iSize2 ;j++)
        {
            Brr[iSize1 + j] = Arr2[j];
        }

        for(int i = (iSize1+iSize2-1); i >= 0 ; i--)
        {
            System.out.print(Brr[i]+"\t");
        }       
    }
}