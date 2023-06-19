//write a program whihc accepts N form user and print all odd numbers up to N
#include<stdio.h>

void Display(int iNO)
{
    printf("Inside display");
    int iCnt=0;
    for(iCnt=1 ;iCnt <= iNO;iCnt++)
    {
        
        if((iCnt % 2) !=0)
        {
            printf("\t%d",iCnt);
        }
    }
}

int main()
{   
    int iValue=0;
    printf("\nEnter Number :");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}