//Accept Character frmo user and check whether it is alphabet is capital or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char ch)
{

    if((ch == 'A') ||(ch == 'a'))
    {
        printf("\n Your exam at 7 PM");
    }else if((ch == 'B') ||(ch == 'b'))
    {
        printf("\n Your exam at 8:30");
    }else if((ch == 'C') ||(ch == 'c'))
    {
        printf("\n Your exam at 9:20");
    }else if((ch == 'D') ||(ch == 'd'))
    {
        printf("\n Your exam at 10:30");
    }

    
}

int main()
{
    char cvalue='\0';
    BOOL bret=FALSE;

    printf("\nEnter the character :");
    scanf("%c",&cvalue);

    DisplaySchedule(cvalue);

    
    return 0;
}