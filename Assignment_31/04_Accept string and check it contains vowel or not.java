import java.util.*;

class Prog31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        
        boolean bRet = obj.ChkVowel(str);

        if(bRet == true)
        {
            System.out.println("Vowel found");
        }
        else
        {
            System.out.println("Vowel not found");
        }

    }
}

class StringX
{
    public boolean ChkVowel(String s)
    {
        char Arr[] = s.toCharArray();
        boolean bflag = false;

        int C_Cnt = 0,S_Cnt = 0,i = 0;

        for(i = 1; i < s.length();i++)
        {
            if((Arr[i] == 'a') ||(Arr[i] == 'e')||(Arr[i] == 'i')||(Arr[i] == 'o')||(Arr[i] == 'u'))
            {
                bflag = true;
            }
        }
        return bflag;
    }
}