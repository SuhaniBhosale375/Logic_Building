///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problem Statement : Accept the number from user and check weather the number is EVEN or ODD
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

         
int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input :     8
//  Output :    Number is even
/////////////////////////////////////////////////////////////////////////////////////////