#include<stdio.h>

void DisplayShcedule(char Div)
{
    if(Div == 'A' || Div == 'a')
    {
        printf("your exam time is 7 AM\n");
    }
    else if(Div == 'B' || Div == 'b')
    {
            printf("your exam time is 8.30 AM\n");
    }
    else if(Div == 'C' || Div == 'c')
    {
        printf("your exam time is 9.20 AM\n");
    }
    else if(Div == 'D' || Div == 'd')
    {
        printf("your exam time is 10.30 AM\n");
    }
    else
    {
        printf("The Division is no their in school\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplayShcedule(cValue);

    return 0;
}