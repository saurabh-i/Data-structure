//Write a program whihc return smallest element from singly linear liked list
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

int smalles(struct Node *Head)
{
    int smalle = Head->data;

    while(Head != NULL)
    {
        if(smalle > Head->data)
        {
            smalle = Head->data;
        }
        Head = Head->next;
    }
    return smalle; 
}
int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 640);
    InsertFirst(&first , 240);
    InsertFirst(&first , 20);
    InsertFirst(&first , 230);
    InsertFirst(&first , 110);

    iret = smalles(first);

    printf("\n Smalles no is :%d",iret);
    return 0;
}