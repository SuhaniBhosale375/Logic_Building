#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

int SearchFirstOccurence(PNODE First,int no)
{
    int i = 0;
    int NodeCnt = 0;
    NodeCnt = Count(First);
    
    for(i = 1; i <= NodeCnt; i++)
    {
        if((First->data) == no)
        {
            return i;
        }
        First = First->next;
    }
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);
    Display(Head);

    printf("Enter the element to find the occurenct of that element :\n");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurence(Head,iValue);
    printf("First occurence : %d\n",iRet);

    return 0;
}