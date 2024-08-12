////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problem Statement : Write a program which accept number from user and return difference between summation of all its factors and non factors
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int SumF = 0;
    int SumN = 0,iDif = 0;

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            SumF = SumF + iCnt;
        }
        else
        {
            SumN = SumN + iCnt;
        }
    }

    iDif = SumF - SumN;

    return iDif;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
   
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d\n",iRet);

    return 0;
}