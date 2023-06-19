#include<stdio.h>
void Display(int ino)
{
    
    int iCnt=0;
    for(iCnt =1;iCnt <= ino;iCnt++)
    {
        printf("%d\t",iCnt * 2);
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