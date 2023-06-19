//write a program which accept number from user and print numbers till that number 
#include<stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt =1;iCnt <= iNO;iCnt++)
    {
        printf("\nEnter number :%d",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("\nEnter number");
    scanf("%d",&iValue);

    Display(iValue);
}