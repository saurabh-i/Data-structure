//write a porgram which return largest element from singly linear linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next ;
};

void InsertFirst(struct Node ** Head , int no)
{
    //create the pointer 
    struct Node * newn = NULL;

    //Allocate the memory
    newn = (struct Node *)malloc(sizeof(struct Node));

    //Inilize the node 
    newn->data = no;
    newn->next = NULL;

    //attach the node at appropritate position
    if(*Head == NULL)
    {
        *Head = newn;
    }else{
        newn->next = *Head;
        *Head = newn;
    }
}

int Largest(struct Node * Head)
{
    int largest = Head->data;
    while(Head != NULL)
    {
        if(largest < Head->data)
        {
            largest = Head->data;
        }
        Head = Head->next;
    }
    return largest;
}

int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 240);
    InsertFirst(&first , 320);
    InsertFirst(&first , 230);
    InsertFirst(&first , 110);    
   
    iret = Largest(first);

    printf("\n Largest element in Linked list are :%d",iret);
    return 0;
}