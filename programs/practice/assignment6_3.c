//write a program to find factorial of given number 
#include<stdio.h>
int Factorial(int iNO)
{
    int iCnt=0;
    int result=1;
    if(iNO < 0)
    {
        iNO=-iNO;
    }
    for(iCnt=1;iCnt <= iNO;iCnt++)
    {
        result=result*iCnt;
    }
    return result;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("\n Enter number :");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("factorial value :%d ",iRet);
    return 0;
}