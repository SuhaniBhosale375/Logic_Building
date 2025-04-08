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

        boolean bRet = obj.pallindrome(Arr,iSize);

        if(bRet == true)
        {
            System.out.printf("it is pallindrome\n");
        }
        else 
        {
            System.out.printf("it is not pallindrome\n");
        }
    }
}

class MyArray
{
    public boolean pallindrome(int arr[],int iSize)
    {
        int iStart = 0;
        int iEnd = arr.length-1;

        while(iStart < iEnd)
        {
            int iCnt = 0,rev = 0,Digit = 0;
            int Temp = arr[iStart];

            if(arr[iStart] == arr[iEnd])
            {
                while(arr[iStart] != 0)
                {
                    Digit = arr[iStart] % 10;

                    rev = (rev * 10) + Digit;

                    arr[iStart] = arr[iStart]/10;

                }
                if(rev == Temp)
                {
                    return true;
                }
               
            }
            iStart++;
            iEnd--;
        }

        return false;

    }
}