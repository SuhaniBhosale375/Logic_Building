///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problem Statement : Write a program which accept oene number from user and print that number of evev number on screen
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)    //  updater
    {
        return;
    }
    for(i = 1; i <= iNo * 2; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int iValue  = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}