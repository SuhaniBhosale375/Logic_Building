#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int CountChar(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
       str++; 
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

    bRet = CountChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Charactrer found\n");
    }
    else
    {
        printf("Charactrer not found\n");
    }
    
    return 0;
}