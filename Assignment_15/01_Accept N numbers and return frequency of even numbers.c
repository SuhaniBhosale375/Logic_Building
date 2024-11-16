#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int i = 0,iEvenCnt = 0;

    if(Arr[i] < 0)
    {
        Arr[i] = -Arr[i];
    }

    for(i = 0; i < iLength;i++)
    {
       if((Arr[i] % 2) == 0)
       {
            iEvenCnt++;
       }
    }

    return iEvenCnt;
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
   
    iRet = CountEven(p,iSize);

    printf("Freqency of even number : %d\n",iRet);

    free(p);
    
    return 0;
}