#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckPrime(int No)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= No/2; iCnt++)
    {
        if(No % iCnt == 0)
        {
            return false;
        }
    }
}

void DisplayPrime(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPrime(First->data) == true)
        {
            printf("%d\t",First->data);
        }
        First = First ->next;
    }
   
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,11);
    InsertLast(&Head,20);
    InsertLast(&Head,17);
    InsertLast(&Head,41);
    InsertLast(&Head,22);
    InsertLast(&Head,89);

    Display(Head);

    DisplayPrime(Head);


    return 0;
}