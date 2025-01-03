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

int SecMaximum(PNODE First)
{
    int iMax = 0,SecMax = 0;

    iMax = First->data;
    
    while(First != NULL)
    {
        if(First->data > iMax)
        {
            iMax = First->data;
        }
        First = First -> next;
    }
    
    while(First != NULL)
    {
        if((First->data < iMax))
        {
            SecMax = First->data;
        }
        First = First -> next;
    }
    return SecMax;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertLast(&Head,110);
    InsertLast(&Head,210);
    InsertLast(&Head,320);
    InsertLast(&Head,240);

    Display(Head);

    iRet = SecMaximum(Head);
    printf("Second element is : %d\n",iRet);

    return 0;
}