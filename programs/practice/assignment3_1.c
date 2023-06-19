//Write a program which accept number form user and display its multipliction fo factor 
#include<stdio.h>
#include<stdbool.h>
int MultFact(int iNO)
{
    int iCnt=0;
    int Result=1;
    for(iCnt =2;iCnt <= (iNO / 2); iCnt++)
    {
        if((iNO % iCnt)== 0)
        {
            Result=Result*iCnt;
        }
    }
    return Result;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter no :");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("\t%d",iRet);
}