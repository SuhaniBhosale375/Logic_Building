import java.util.*;

class Prog42_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        MyArray obj = new MyArray();

        System.out.println("Enter the size for first array :");
        int iSize1 = sobj.nextInt();
        int Arr1[] = new int[iSize1];

        System.out.println("Enter the size for Second array :");
        int iSize2 = sobj.nextInt();
        int Arr2[] = new int[iSize2];

        System.out.println("Enter the elements for First Array");
        
        for(int i = 0; i < Arr1.length;i++)
        {
            Arr1[i] = sobj.nextInt();
        }
        
        System.out.println("Enter the elements for second Array");
        
        for(int i = 0; i < Arr2.length;i++)
        {
            Arr2[i] = sobj.nextInt();
        }

        obj.Minimum(Arr1,Arr2);
    }
}

class MyArray
{
    public void Minimum(int Arr1[],int Arr2[])
    {
        int Min1 = Arr1[0],Min2 = Arr2[0];

        for(int i = 0; i < Arr1.length;i++)
        {
            if(Arr1[i] < Min1)
            {
                Min1 = Arr1[i];
            }
         
        }
        for(int j = 0; j < Arr2.length;j++)
        {
            if(Arr2[j] < Min2)
            {
                Min2 = Arr2[j];
            }
        }
        
        System.out.println("Smallest element in first array "+Min1);
        System.out.println("Smallest element in second array "+Min2);

    }
}