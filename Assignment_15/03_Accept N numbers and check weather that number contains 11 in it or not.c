#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int i = 0;

   for(i = 0; i < iLength;i++)
    {
        if(Arr[i] == 11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;

        }
    }
}
int main()
{
    int iSize = 0 ,iCnt = 0;
    int*p = NULL;
    BOOL bRet = FALSE;

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
   
    bRet = Check(p,iSize);
    if(bRet == TRUE)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    
    free(p);
    
    return 0;
}