#include<stdio.h>
void Display(int ino)
{
    
    int iCnt=0;
    for(iCnt =1;iCnt <= ino;iCnt++)
    {
        printf(" # \t %d \t *\t",iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("\nEnter the number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}