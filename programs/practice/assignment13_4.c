//Tourist compnay
#include<stdio.h>
int TouristBill(int iAmount)
{
    int result=0;
    if(iAmount < 100)
    {
        return (25 * iAmount);
    }
    if(iAmount > 100)
    {
        iAmount=iAmount-100;
        result=2500 + (iAmount * 15);
        return result;
    }
}
int main()
{
    int iValue=0;
    int iret=0;
    printf("\nEnter the toatl kilometer :");
    scanf("%d",&iValue);

    iret=TouristBill(iValue);
    printf("%d",iret);
    return 0;
}