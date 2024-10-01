/*
    Problem statement : Write a program to fin odd factorial of the given number.

    Input   : 5
    Output  : 15 (5 * 3 * 1)
*/
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iFact = 1,iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2) !=0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}