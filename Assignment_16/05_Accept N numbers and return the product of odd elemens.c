#include<stdio.h>
#include<stdlib.h>

int Produnct(int Arr[],int iLength)
{
    int i = 0,iMult  = 1;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iMult = iMult * Arr[i];
        }
        
    }

    if(Arr[i] % 2 == 0)
    {
        return iMult;
    }
    else
    {
        return 0;
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

    iRet = Produnct(p,iSize);

    printf("Produnct of odd elements is : %d\n",iRet);

    free(p);
    
    return 0;
}