#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,iDigCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iDigCnt++;
        }
        
        iNo = iNo / 10;
    }

    return iDigCnt;
}
int main()
{
    int iValue = 0;
    int iRet =  0;

    printf("Enter any number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Digits in between 3 & 7 are  : %d\n",iRet);

    return 0;
}