#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("********************************\n");
    printf("Table of given number\n");
    printf("********************************\n");

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iCnt * iNo);
    }

    printf("********************************\n");
  
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}