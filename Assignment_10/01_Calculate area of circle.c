#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14, fArea = 0.0f;

    fArea = PI * fRadius * fRadius;

    return fArea;

}
int main()
{
    float iValue = 0.0f,fRet = 0;
    
    printf("Enter Number radius  \n");
    scanf("%f",&iValue);

    fRet = CircleArea(iValue);

    printf("Area of cicle  is %f",fRet);

    return 0;
}