//write a program which accept number form user and heck whether it contain 0 in it or not
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool checkZero(int iNO)
{
    bool bret=false;
    int iDigit=0;

    while(iNO !=0)
    {
        iDigit=iNO % 10;
        if(iDigit == 0)
        {
            bret= true;
            break;
        }
        iNO= iNO/10;
    }
    return bret;
}
int main()
{
    int iValue=0;
    bool bRet =0.0f;

    printf("\nEnter the Number :");
    scanf("%d",&iValue);

    bRet=checkZero(iValue);
    if(bRet== TRUE)
    {
        printf("It contain zero");
    }
    else {
        printf("THere is no zero ");
    }
    return 0;
}