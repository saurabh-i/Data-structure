//Accept Character frmo user and check whether it is alphabet is capital or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL result=FALSE;
    if((ch >= 'A') && (ch <= 'Z') )
    {
        result=TRUE;     
    }

    return result;
}

int main()
{
    char cvalue='\0';
    BOOL bret=FALSE;

    printf("\nEnter the character :");
    scanf("%c",&cvalue);

    bret=ChkAlpha(cvalue);

    if(bret == TRUE)
    {
        printf("\nIt is Capital Character  ");
    }
    else{
        printf("\n It is not a Capital Character ");
    }
    return 0;
}