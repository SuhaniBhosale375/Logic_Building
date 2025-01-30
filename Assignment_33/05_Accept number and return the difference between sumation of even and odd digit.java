import java.util.*;

class Prog33_5
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter any number :");
        int Value = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.Difference(Value);

        System.out.println("Difference between sumation of even and odd digit : "+iRet);
    }
}

class Digit
{
    public int Difference(int iNo)
    {
        int iDigit = 0,E_Sum = 0, O_Sum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if((iDigit % 2) == 0)
            {
                E_Sum = E_Sum + iDigit;
            }
            if((iDigit % 2) != 0)
            {
                O_Sum = O_Sum + iDigit;
            }
            iNo = iNo / 10;
        }
        return (E_Sum - O_Sum);
    }
}