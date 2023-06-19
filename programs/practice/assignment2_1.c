//Accept one number form student and print that number of * on screen 
#include<stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt =1;iCnt <= iNO;iCnt++)
    {
        printf("\t*");
    }
}
int main()
{   
    int iValue=0;

    printf("\nEnter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}