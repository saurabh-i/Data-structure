//Write a program which display product of all difit of all element from singly linear linked list

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
    int result =1;
    while(Head != NULL)
    {
        temp = Head->data;
        while(temp != 0)
        {
            Digit = temp % 10;
            
            if(Digit == 0)
            {
                Digit = 1;
            }

            result = result * Digit; 
            temp = temp / 10; 
        }
        Head = Head->next;
        printf("%d\t",result);  
        result = 1;
    }
}

int main()
{
    int iret = 0;
    struct Node * first = NULL;

    InsertFirst(&first , 41);
    InsertFirst(&first , 32);
    InsertFirst(&first , 20);
    InsertFirst(&first , 11);

    Reverse(first);
    
    return 0;
}