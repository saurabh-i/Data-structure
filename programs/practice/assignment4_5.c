//write a program which accept makrs and obtained makrs form suer and calculate percentage 

#include<stdio.h>
float percentage(int iNO1,int iNO2)
{
    
    
    return ((iNO2*100)/iNO1);
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    float fValue=0.000f;

    printf("\nEnter total makrs :");
    scanf("%d",&iValue1);

    printf("\nEnter Obtained makrs :");
    scanf("%d",&iValue2);
    

    fValue=percentage(iValue1,iValue2);

    printf("\n %f",fValue);
    return 0;
}