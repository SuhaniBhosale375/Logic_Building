import java.util.*;

class Prog43_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        MyArray obj = new MyArray();

        System.out.println("Enter Arra of characters :");
        String str = sobj.nextLine();
    
        char Arr[] = str.toCharArray();

        int iRet = obj.CountCapital(Arr);

        System.out.println("Number of Capital elemnts are :"+iRet);
    }
}

class MyArray
{
    public int CountCapital(char arr[])
    {
        int Count = 0;
        for(int i = 0 ;i < arr.length; i++)
        {
            if((arr[i] >= 'A') && (arr[i] <= 'Z'))
            {
                Count++;
            }
        }
         return Count;
    }
   
}