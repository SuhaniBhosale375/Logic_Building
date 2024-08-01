#include<stdio.h>


typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkVowel(char CValue)
{
    if(CValue == 'a'|| CValue == 'A' || CValue == 'i' || CValue == 'I' || CValue == 'e' || CValue == 'E'|| CValue == 'o'|| CValue == 'O'|| CValue == 'u'|| CValue == 'U')
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
    char cValue = '\0';
    bool bRet   = FALSE;

    printf("Enter Character\n");
    scanf("%d",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
         printf("It is not Vowel\n");
    }

    return 0;
}
