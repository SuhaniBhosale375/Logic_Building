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

void DisplayProduct(PNODE First)
{
    printf("Display small digit in the linked list  :\n");
    while(First != NULL)
    {
        int iDig = 0,iTemp = 0;
        int L_Dig = 0;

        iTemp = First ->data;
        
        while(iTemp != 0)
        {
            iDig = iTemp % 10;
            
            if(iDig > L_Dig)
            {
                L_Dig = iDig;
            }

            iTemp = iTemp/10;
        }
        printf("%d\t",L_Dig);
        First =  First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iValue = 0;

     InsertLast(&Head,11);
    InsertLast(&Head,250);
    InsertLast(&Head,532);
    InsertLast(&Head,415);

    Display(Head);

    DisplayProduct(Head);
   
    return 0;
}