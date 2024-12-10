#include<stdio.h>
void DisplayASCII()
{
    char ch = '\0';
    int i = 0;

    printf("**********************************************\n");

    printf("Charcater\t Decimal\t Hexadecimal\t Octal\n");

    for(i = 0; i<= 255;i++)
    {
        printf("%c\t\t %d\t\t %x\t\t %o\n",i,i,i,i);
    }

    printf("**********************************************\n");
}
int main()
{
   DisplayASCII();

   return 0;
}