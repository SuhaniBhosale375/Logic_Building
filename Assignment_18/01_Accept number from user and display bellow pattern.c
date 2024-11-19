#include<stdio.h>

void Pattern(int iNo)
{
    int  i = 0;
    char Ch = 'A';

    for(i = 1; i <= iNo; Ch++,i++)
    {
        printf("%c\t",Ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}