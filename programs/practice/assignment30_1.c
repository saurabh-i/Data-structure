//write a program which search first occurrence of particular element from singly iner link list
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next ;
};

void InsertFirst(struct Node ** Head , int ino)
{
    //Create the pointer
    struct Node * newn = NULL;
     
    //allocat the memory
    newn = (struct Node *)malloc(sizeof(struct Node));

    //Inilize the node 
    newn->data = ino;
    newn->next = NULL;

    //actual logic 
    if(*Head == NULL)
    {
        *Head = newn;
    }else{
        newn->next = *Head;
        *Head = newn;
    }
}

int SearchFirstOCC(struct Node ** Head , int no)
{
    struct Node * temp = *Head;
    int counter=1;

    while(temp->data != no)
    {
        temp = temp->next;
        counter++;
    }
    return counter;
}

int main()
{
    int iret=0;
    struct Node * first = NULL;

    InsertFirst(&first , 70);
    InsertFirst(&first , 60);
    InsertFirst(&first , 50);
    InsertFirst(&first , 40);
    InsertFirst(&first , 30);
    InsertFirst(&first , 20);
    InsertFirst(&first , 10);
    
    iret = SearchFirstOCC(&first ,30 );
    
    printf("%d",iret);
    return 0 ;
}

