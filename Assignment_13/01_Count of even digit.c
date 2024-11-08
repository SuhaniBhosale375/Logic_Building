#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0,iEvenCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2)== 0)
        {
            iEvenCnt++;
        }
        
        iNo = iNo / 10;
    }

    return iEvenCnt;
}
int main()
{
    int iValue = 0;
    int iRet =  0;

    printf("Enter any number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Frequency of Even digits is : %d\n",iRet);

    return 0;
}