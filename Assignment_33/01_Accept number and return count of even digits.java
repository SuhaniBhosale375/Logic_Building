import java.util.*;

class Prog33_1
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter any number :");
        int Value = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.CountEven(Value);

        System.out.println("Count of even digit is : "+iRet);
    }
}

class Digit
{
    public int CountEven(int iNo)
    {
        int iDigit = 0,iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt++;
    }
}