//Write a program which display smallest digits of all element fromsngly liear linked list

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

void DisplaySmall(struct Node *Head)
{
    int Digit = 0;
    int temp = 0;
    int smalles = 9;
    while(Head != NULL)
    {
        temp = Head->data;
        while(temp != 0)
        {
            Digit = temp % 10;
            if(Digit < smalles)
            {
                smalles = Digit;
            }
            temp = temp / 10;
        }
        printf("%d\t",smalles);
        smalles = 9;
        Head = Head->next;
    }
}

int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 415);
    InsertFirst(&first , 532);
    InsertFirst(&first , 250);
    InsertFirst(&first , 11);

    DisplaySmall(first);
    
    return 0;
}