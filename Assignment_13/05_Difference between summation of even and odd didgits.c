#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,iEvenSum = 0,iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        if((iDigit % 2) != 0)
        {
            iOddSum = iOddSum + iDigit;
        }
        
        iNo = iNo / 10;
    }

    return (iEvenSum - iOddSum);
}
int main()
{
    int iValue = 0;
    int iRet =  0;

    printf("Enter any number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Difference between summation of even and odd digits  : %d\n",iRet);

    return 0;
}