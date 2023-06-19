#include<stdio.h>
void Display(int ino)
{
    char c='A';
    int iCnt=0;
    for(iCnt =1;iCnt <= ino;iCnt++,c++)
    {
        printf("%c\t",c);
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