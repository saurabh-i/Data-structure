//write a program which accept number form user and return summation of all its non factors 
#include<stdio.h>
int SumNonFact(int iNO)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=2;iCnt<iNO;iCnt++)
    {
        if((iNO % iCnt) != 0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet= SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}
