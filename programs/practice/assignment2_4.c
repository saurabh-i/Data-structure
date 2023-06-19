//Accept two numbers from user and display first number in second number of times 
#include<stdio.h>
void Display(int iNO1, int iNO2)
{
    int iCnt=0;
    for(iCnt=1;iCnt <= iNO2;iCnt++)
    {
        printf("\t%d",iNO1);
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("\nEnter no :");
    scanf("%d",&iValue1);

    printf("\nEnter frequency :");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);
}