#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int i = 0,iEvenSum = 0,iOddSum = 0,iDiff = 0;

    for(i = 0; i < iLength;i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[i];
        }
        if((Arr[i] % 2) != 0)
        {
            iOddSum = iOddSum + Arr[i];
        }
    }
    
    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
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
   
    iRet = Difference(p,iSize);

    printf("Result is %d\n",iRet);

    free(p);
    
    return 0;
}