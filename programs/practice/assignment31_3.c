//Write a porgram which displayes the addication of all even number from singly linear liknked list
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

int AddicationEven(struct Node *Head)
{
    int sum = 0;
    while(Head != NULL)
    {
        if(((Head->data) % 2) == 0 )
        {
            sum = sum + Head->data;
        }
        Head = Head->next;
    }

    return sum;
}

int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 41);
    InsertFirst(&first , 32);
    InsertFirst(&first , 20);
    InsertFirst(&first , 11);

    iret = AddicationEven(first);
    
    printf("\nAddication of even number :%d",iret);
    return 0;
}