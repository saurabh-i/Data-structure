//write a program which accep three no from user and print its multipliction
#include<stdio.h>

/*int Multiply(int iNO)
{
    int iCnt=0;
    int SumMult=1;
    int No2=1;
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        printf("Enter number :");
        scanf("%d",&No2);
        SumMult=SumMult *No2;
    }
    
    return SumMult;
}
int main()
{
    int iValue1=0;
    int iRet=0;
    printf("Enter number you want to multiply :");
    scanf("%d",&iValue1);
    
    iRet= Multiply(iValue1);

    printf("Multipliction is :%d",iRet);

}*/

int Multiply(int iNO1,int iNO2,int iNO3)
{
    return iNO1 * iNO2 * iNO3;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("\nEnter first no :");
    scanf("%d",&iValue1);

    printf("\n Enter second no :");
    scanf("%d",&iValue2);

    printf("\n Enter third no :");
    scanf("%d",&iValue3);

    iRet= Multiply(iValue1,iValue2,iValue3);

    printf("Multipliction is :%d",iRet);

}