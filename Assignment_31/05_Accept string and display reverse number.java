import java.util.*;

class Prog31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        
        int iRet = obj.CountCapital(str);
        System.out.println("Count of capital letters is :"+iRet);

    }
}

class StringX
{
    public void Reverse(String s)
    {
        
        for(int i = 0; i < s.length();i++)
        {
            
        }
        return iCnt;
    }
}