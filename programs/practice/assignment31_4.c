//Write a porgram which return second maximum element from singly linear linked list
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next ;
};

void InsertFirst(struct Node ** Head , int no)
{
    //create the pointer 
    struct Node * newn = NULL;

    //Allocate the memory
    newn = (struct Node *)malloc(sizeof(struct Node));

    //Inilie the member 
    newn->data = no;
    newn->next = NULL;

    //Allocate the node at approprite position
    if(*Head == NULL)
    {
        *Head = newn;
    }else{
        newn->next = *Head;
        *Head = newn;
    }
}

int SecMaximum(struct Node *Head)    
{
    int largest = Head->data;
    int second_largest = 0;

    while(Head != NULL)
    {
        if(largest < Head->data)
        {
            second_largest = largest;
            largest = Head->data;
        }else if(Head->data > second_largest )
        {
            second_largest = Head->data;
        }
        Head = Head->next;
    }
    return second_largest;
}

int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 240);
    InsertFirst(&first , 320);
    InsertFirst(&first , 230);
    InsertFirst(&first , 110);

    iret = SecMaximum(first);
    
    printf("\nSecond maximum number :%d",iret);
    return 0;
}