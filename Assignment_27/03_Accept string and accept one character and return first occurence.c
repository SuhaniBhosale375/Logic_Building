#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int FirstOccurence(char *str,char ch)
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
        return i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :");
    scanf("  %[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = FirstOccurence(arr,cValue);

    printf("Character location is : %d",iRet);
    
    return 0;
}