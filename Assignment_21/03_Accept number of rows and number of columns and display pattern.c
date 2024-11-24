#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int  i = 0, j = 0, iCount = 0;
    char Ch = 'a';

    for(i = 1,iCount = 1; i <= iRow; i++,iCount = 1,Ch = 'a')
    {
        for(j = 1; j <= iCol ; j++,iCount++,Ch++)  
        {
            if(i % 2 != 0)
            {
                printf("%c\t",Ch);
            }
            else
            {
                printf("%d\t", iCount*2);
            }
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
