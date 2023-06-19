//write a program whic accep tniumber form user and display its table in revers order 
#include<stdio.h>
void table(int iNo)
{
    int iCnt=0;
    
    for(iCnt =10 ;iCnt > 0 ;iCnt--)
    {
        printf("\t%d",iNo * iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("\n Enter number :");
    scanf("%d",&iValue);

    table(iValue);
    return 0;
}