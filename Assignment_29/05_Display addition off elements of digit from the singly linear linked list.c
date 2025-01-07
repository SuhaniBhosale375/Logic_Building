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

int SumDigit(PNODE First)
{
    while(First != NULL)
    {
        
        int iDig = 0,Sum = 0;
        
        while((First->data) != 0)
        {
            iDig = (First->data) % 10;
            Sum = Sum + iDig;
            (First->data) = (First->data)/10;
        }
        
        printf("%d\t",Sum);
        First=  First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertLast(&Head,110);
    InsertLast(&Head,230);
    InsertLast(&Head,20);
    InsertLast(&Head,240);
    InsertLast(&Head,640);

    Display(Head);

    SumDigit(Head);
   
    return 0;
}