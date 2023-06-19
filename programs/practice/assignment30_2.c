//write a program which searches last occurance of particular element frmo singly linear linkledlist
//Function should return position at which element is found 
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next ;
};


void InsertFirst(struct Node ** Head , int no)
{
    //Create the node 
    struct Node * newn = NULL;

    //Allocate the memory
    newn = (struct Node *)malloc(sizeof(struct Node));

    //Inilize the node
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }else{
        newn->next = *Head;
        *Head = newn;
    }
}
void Display(struct Node *Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
}

int SearchLastOCC(struct Node * Head ,  int no)
{
    int counter = 1;
    int result =0;
    while(Head != NULL)
    {
        if(Head->data == no)
        {
            result = counter;
        }
        counter++;
        Head = Head->next;
    }

    return result;
}
int main()
{
    int iret=0;
    struct Node * first = NULL;

    InsertFirst(&first , 70);
    InsertFirst(&first , 30);
    InsertFirst(&first , 50);
    InsertFirst(&first , 40);
    InsertFirst(&first , 30);
    InsertFirst(&first , 20);
    InsertFirst(&first , 10);

    Display(first);

    iret = SearchLastOCC(first , 30);

    printf("\nLast occurance :%d",iret);
    return 0;
}