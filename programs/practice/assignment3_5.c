//write a program which accept number form user and return difference between summation of all its factors adn non factors. 
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int isum=0;
    int idiff=0;
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            isum=isum+iCnt;
        }
        else 
        {
            idiff=idiff+iCnt;
        }
    }
    printf("%d %d",isum,idiff);
    return isum -idiff;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the no :");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}