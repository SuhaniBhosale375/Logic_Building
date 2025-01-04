#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int CheckChar(char *str,char ch)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           break;
        }
       str++; 
       i++;
    }

    if(*str == ch)
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
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String :");
    scanf("  %[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    bRet = CheckChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}