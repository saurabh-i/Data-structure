
#include<stdio.h>
float IncomeTax(int iAmount)
{
    int resul=0;
    if(iAmount < 500000)
    {
        return (float)iAmount;
    }
    
    if((iAmount > 500000 ) && (iAmount < 1000000))
    {
        //tax is 10 %
        iAmount=iAmount-500000;
        resul=("%f",((float)10 / (float)100 ) * iAmount);
        printf("%d",resul);
    }

    if((iAmount > 1000000 ) && (iAmount < 2000000))
    {
        //tax is 10 %
        resul=("%f",((float)10 / (float)100 ) * 500000);
        //20 tax
        iAmount=iAmount-1000000;
        resul=resul+("%f",((float)20 / (float)100 ) * iAmount);
        printf("%d",resul);
    }

    if((iAmount > 1000000 ) && (iAmount < 2000000))
    {
        //tax is 10 %
        resul=("%f",((float)10 / (float)100 ) * 500000);
        //20 tax
        iAmount=iAmount-1000000;
        resul=resul+("%f",((float)20 / (float)100 ) * iAmount);
        printf("%d",resul);
    }

    if(iAmount > 2000000 )
    {
        //tax is 10 %
        resul=("%f",((float)10 / (float)100 ) * 500000);
        resul=resul+("%f",((float)20 / (float)100 ) * 1000000);
        //20 tax
        iAmount=iAmount-2000000;
        resul=resul+("%f",((float)30 / (float)100 ) * iAmount);
        printf("%d",resul);
    }
    
}
int main()
{
    int iValue=0;
    float fret=0.0f;
    printf("\nEnter total bill amount :");
    scanf("%d",&iValue);

    fret =IncomeTax(iValue);
    //printf("%f",fret);
    return 0;
}