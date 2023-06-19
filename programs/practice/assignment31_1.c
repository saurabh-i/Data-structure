//Write a program whihc displayes all elements which are perfect from singly linear linked list
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

void DisplayPrime(struct Node *Head)
{
    int icnt = 0;
    int sum = 0;
    while(Head != NULL)
    {
        for(icnt = 1; icnt <= (Head->data / 2) ; icnt++)
        {
            if((Head->data % icnt) == 0)
            {
                sum = sum + icnt;
            }
        }

        if(Head->data == sum)
        {
            printf("%d\t",Head->data);
        }

        sum = 0;
        Head = Head->next; 
    }
     
}
int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 89);
    InsertFirst(&first , 6);
    InsertFirst(&first , 41);
    InsertFirst(&first , 17);
    InsertFirst(&first , 28);
    InsertFirst(&first , 11);

    DisplayPrime(first);

    return 0;
}