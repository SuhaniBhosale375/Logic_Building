#include<stdio.h>
#include<stdlib.h>

int LastOcr(int Arr[],int iLength,int iNo)
{
    int i = 0;

   for(i = iLength; i >= 0; i--)
    {
        if(Arr[i] == iNo)
        {
            break;
        }

    }

    if(i == iLength)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
int main()
{
    int iSize = 0 ,iCnt = 0,iValue = 0,iRet = 0;
    int*p = NULL;
     
    
    printf("Enter number of elments : ");
    scanf("%d",&iSize);

    printf("Enter the number:\n");
    scanf("%d",&iValue);

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
   
    iRet = LastOcr(p,iSize,iValue);

    printf("Last Occurence is : %d\n",iRet);
    free(p);
    
    return 0;
}