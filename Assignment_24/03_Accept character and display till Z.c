#include<stdio.h>
void Display(char ch)
{
    char i = '\0';
    
    while(i <= 'z')
    {
        if((ch >= 'A') &&(ch <= 'Z'))
        {
            printf("%c\t",ch++);

            if(ch > 'Z')
            {
                break;
            }
        }
        else if((ch >= 'a') &&(ch <= 'z'))
        {
            printf("%c\t",ch--);
            if(ch < 'a')
            {
                break;
            }
        }
        i++;
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter any character\n");
    scanf("%c",&cValue);

    Display(cValue);

   return 0;
}