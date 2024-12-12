#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\t :  %d\nOctal\t : %o\nHexadecimal : %x\n",ch,ch,ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter any character\n");
    scanf("%c",&cValue);

    Display(cValue);

   return 0;
}