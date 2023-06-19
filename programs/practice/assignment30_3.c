//Write a program which returuns additoins of all element from singly linear liked list
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next ;
};

void InsertFirst(struct Node ** Head , int no )
{
    //create the pointer 
    struct Node * newn = NULL;

    //Allocate the memory
    newn = (struct Node * )malloc(sizeof(struct Node));

    //Inilize the memory
    newn->data = no;
    newn->next = NULL;

    //allocate the node at appropriate position
    if(*Head == NULL)
    {
        *Head = newn;
    }else{
        newn->next = *Head;
        *Head = newn;
    }
}

int Addication(struct Node *Head)
{
    int sum =0;

    while(Head != NULL)
    {
        sum = sum + Head->data;
        Head = Head->next;
    }

    return sum;
}

int main()
{
    int iret=0;
    struct Node * first  = NULL;

    InsertFirst(&first , 40);
    InsertFirst(&first , 30);
    InsertFirst(&first , 20);
    InsertFirst(&first , 10);
    
    iret = Addication(first);
    
    printf("\n Addication is :%d",iret);
    return 0;
}