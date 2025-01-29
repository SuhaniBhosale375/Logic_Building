import java.util.*;

class Prog33_1
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter any number :");
        int Value = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.CountOdd(Value);

        System.out.println("Multiplication of all digit is : "+iRet);
    }
}

class Digit
{
    public int CountOdd(int iNo)
    {
        int iDigit = 0,iMult = 1;
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 0)
            {
                iDigit = iDigit + 1;
            }
            iMult = iMult * iDigit;
           
            iNo = iNo / 10;
        }
        return iMult;
    }
}