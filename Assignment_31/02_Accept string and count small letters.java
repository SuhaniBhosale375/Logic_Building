import java.util.*;

class Prog31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        
        int iRet = obj.CountSmall(str);
        System.out.println("Count of small letters is :"+iRet);

    }
}

class StringX
{
    public int CountSmall(String s)
    {
        char Arr[] = s.toCharArray();

        int iCnt = 0;
        for(int i = 0; i < s.length();i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}