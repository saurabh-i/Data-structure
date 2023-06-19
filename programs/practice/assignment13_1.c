/*Design application for hotel. According to the management tream of hotel they are giving discount on total bill amount of customer
if Bill bill amount is less than 500 then there is no dicount , if bill amount is less than 1500 
and more than 500 they give 10 discount 
and if the bill amount is more than 1500 nthen they give 15 % discount 
and if the bill amount is more than 1500 then they gi ve 15% discount 
out application should accept total bill amount and depends on the dicount policy we have to return the amount after appliying discount*/
#include<stdio.h>
float CalculateBill(int iAmount)
{
    if(iAmount <= 500)
    {
        return iAmount;
    }else if ((iAmount > 500) && (iAmount <= 1500))
    {
        //10 % discount 
        return ("%f",(iAmount - (((float)10 /(float) 100) * iAmount))); 
    }else if(iAmount > 1500)
    {
        //15 % discount 
        return("%f",(iAmount - (((float)15 /(float) 100) * iAmount))); 
    }
}
int main()
{
    int iValue=0;
    float fret=0.0f;
    printf("\nEnter total bill amount :");
    scanf("%d",&iValue);

    fret =CalculateBill(iValue);
    printf("%f",fret);
    return 0;
}