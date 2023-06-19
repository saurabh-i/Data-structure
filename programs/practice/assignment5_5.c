//write a program which accept N and print first 5 multiples of N
#include<stdio.h>
void MultiplayDisplay(int iNO)
{
    int iCnt=0;
    for(iCnt=1;iCnt <=5 ;iCnt++)
    {
        printf("\t%d",iNO*iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("\nEnter number :");
    scanf("\t %d",&iValue);

    MultiplayDisplay(iValue);

    return 0;
}