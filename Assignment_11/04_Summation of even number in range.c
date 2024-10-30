#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}
int main()
{
    int iValue1  = 0,iValue2  = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);
     
    printf("Enter ending point\n");
    scanf("%d",&iValue2);
    
    if(iValue1 < 0 || iValue1 > iValue2)
    {
        printf("Invalid range\n");
        return 0;
    }

    iRet = RangeEvenSum(iValue1,iValue2);
    
    printf("Summation is %d\n",iRet);
    return 0;
}