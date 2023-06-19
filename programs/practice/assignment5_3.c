//write a program which accep tniumber form user and print its numbers line 
#include<stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt= -iNO;iCnt <= iNO;iCnt++)
    {
        printf("\t%d",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("\n Enter number :");
    scanf("\n%d",&iValue);

    Display(iValue);
    return 0;
}