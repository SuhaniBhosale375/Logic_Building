///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problem Statement : Accept one character from user and convert case of that character
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(int CValue)
{
    int iAscii = 0;

    if(CValue >= 65 && CValue <= 90)
    {
       iAscii= CValue + 32;
        printf("%c",iAscii);
     
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%d",&cValue);

    DisplayConvert(cValue);

    return 0;
}
