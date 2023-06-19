#include<stdio.h>
int IncomeTax(int iAmount)
{
    switch(iAmount)
    {
        case 1 :printf("8900");
                break;

        case 2 :printf("12790");
                break;

        case 3 :printf("21000");
                break;       

        case 4 :printf("23450");
                break;

        default : printf("Wrong input");
                break;         
    }

}
int main()
{
    int iValue=0;
    
    printf("\nEnter the standered :");
    scanf("%d",&iValue);

    IncomeTax(iValue);
    
    return 0;
}