#include<stdio.h>

void strlUprx(char *str)
{
    while(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
       {
            *str = *str - 32;
       }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    strlUprx(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}