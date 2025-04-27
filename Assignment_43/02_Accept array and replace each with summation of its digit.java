import java.util.*;

class Prog42_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        MyArray obj = new MyArray();

        System.out.println("Enter the size for array :");
        int iSize = sobj.nextInt();
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements for second Array");
        for(int i = 0; i < Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        obj.SummationOfElements(Arr,iSize);

    }
}

class MyArray
{
    public void SummationOfElements(int arr[],int iSize)
    {
        
        for(int i = 0 ;i < arr.length; i++)
        {
            int Sum = 0;
            int rev = 0,Digit = 0;

              while(arr[i] != 0)
                {
                    Digit = arr[i] % 10;

                    Sum = Sum+Digit;

                    arr[i] = arr[i]/10;

                }
                System.out.print(Sum+"\t");
        }
    }
}