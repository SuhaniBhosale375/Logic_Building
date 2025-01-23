import java.util.*;

class Prog31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        
        int iRet = obj.CountDifference(str);
        System.out.println("Difference between capital and small letters :"+iRet);

    }
}

class StringX
{
    public int CountDifference(String s)
    {
        char Arr[] = s.toCharArray();

        int C_Cnt = 0,S_Cnt = 0;
        for(int i = 0; i < s.length();i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                S_Cnt++;
            }
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                C_Cnt++;
            }
        }
        return (S_Cnt - C_Cnt);
    }
}