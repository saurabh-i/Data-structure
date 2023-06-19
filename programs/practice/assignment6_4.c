//write a program which accept no form user and display its table 
#include<stdio.h>
void table(int iNO)
{
    int iCnt=0;
    for(iCnt=1; iCnt <= 10;iCnt++)
    {
        printf("\t%d",iCnt *iNO);
    }
}
int main()
{
    int iValue=0;
    printf("\nEnter no :");
    scanf("%d",&iValue);

    table(iValue);
    return 0;
}