//Write a porgram whihc display addictino of digits of element from singly liearlinked list

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

void Int_SumDigit(struct Node *Head)
{
    int Digit = 0;
    int sum = 0; 
    int temp = 0;

    while(Head != NULL)
    {
        sum = 0;
        temp = Head->data;
        while(temp != 0)
        {
            Digit = temp % 10;
            sum = sum + Digit;
            temp = temp / 10;
        }  
        printf("%d\t",sum);
        Head = Head->next;    
    }
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

    Int_SumDigit(first);
    
    return 0;
}