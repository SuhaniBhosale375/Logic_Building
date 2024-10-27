#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double fArea = 0.0;

    fArea = fWidth * fHeight;

    return fArea;

}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
    
    printf("Enter Number Width  \n");
    scanf("%f",&fValue1);

    printf("Enter Number height \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is %lf",dRet);

    return 0;
}