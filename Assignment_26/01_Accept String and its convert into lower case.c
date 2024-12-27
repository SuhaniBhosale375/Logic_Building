#include<stdio.h>

void strlWrx(char *str)
{
    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
            *str = *str + 32;
       }
       str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    strlWrx(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}