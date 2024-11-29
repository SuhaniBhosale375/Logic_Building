#include<stdio.h>
#include<stdlib.h>

void SumDigits(int Arr[],int iLength)
{
    int i = 0,iDigit = 0;

    for(i = 0; i < iLength; i++)
    {
       int iSum = 0;
       int iNo = Arr[i];
       while(iNo != 0)
       {
            iDigit = iNo % 10;
            iNo = iNo/10;
            iSum = iSum + iDigit;
       }
        printf("%d \t",iSum);
    }
}
int main()
{
    int iSize = 0 ,iCnt = 0,iRet = 0;
    int*p = NULL;
     
    printf("Enter number of elments : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        
        scanf("%d",&p[iCnt]);
    }

    SumDigits(p,iSize);

    free(p);
    
    return 0;
}