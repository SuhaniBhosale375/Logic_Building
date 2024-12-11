#include<stdio.h>
char Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
    
}
int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter any character\n");
    scanf("%c",&cValue);

    cRet = Display(cValue);

    printf("Toggled character is : %c",cRet);

   return 0;
}