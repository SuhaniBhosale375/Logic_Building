#include<stdio.h>
int OddFactorial(int iNo)
{
    int iEvenFact = 1,iOddFact = 1,iCnt = 0,iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        if((iCnt % 2) !=0)
        {
            iOddFact =  iOddFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;

    return iDiff;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Difference between Even and Odd factorial  is %d",iRet);

    return 0;
}