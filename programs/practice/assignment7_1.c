//write a program which accept number form user and display its digits in reverse order 
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        printf("\n%d",iDigit);
        iNo=iNo /10;
    }
}
int main()
{
    int iVlaue=0;
    printf("\n Enter number :");
    scanf("%d",&iVlaue);

    DisplayDigit(iVlaue);
    return 0;
}