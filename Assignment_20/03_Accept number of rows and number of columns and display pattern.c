#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int  i = 0, j = 0;
    char Ch = 'A';

    for(i = 1; i <= iRow; i++,Ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c",Ch);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows");
    scanf("%d",&iValue1);

    printf("Enter number of Colums");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2 );

    return 0;
}
