#include<stdio.h>

double SquareMeter(int iValue)
{
    double Sqrmeter = 0.0;

    Sqrmeter = iValue * 0.092903;
    
    return Sqrmeter;
}
int main()
{
    int iValue  = 0;
    double dRet = 0.0;

    printf("Enter area in squarefeet \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("area in square meter is %lf\n",dRet);

    return 0;
}