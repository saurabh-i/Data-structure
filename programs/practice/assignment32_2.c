//Write a porgram which reverse each element of singly linked list

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

void Reverse(struct Node *Head)
{
    int Digit = 0;
    int temp = 0;
    int result =0;
    while(Head != NULL)
    {
        temp = Head->data;
        while(temp != 0)
        {
            Digit = temp % 10;
            result = (result * 10)+Digit;
            temp = temp / 10; 
        }
        
        if(Head->data == result)
        {
            printf("%d \t",Head->data);
        }
        Head = Head->next;
        result = 0;
    }
}

int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 89);
    InsertFirst(&first , 6);
    InsertFirst(&first , 414);
    InsertFirst(&first , 17);
    InsertFirst(&first , 28);
    InsertFirst(&first , 11);

    Reverse(first);
    
    return 0;
}