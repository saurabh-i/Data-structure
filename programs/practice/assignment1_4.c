//Accep one number and check whether is divisible by 5 or not 
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(BOOL iNO)
{
    if((iNO % 5)==0)
    {
        return TRUE;
    }
    else {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet =FALSE;

    printf("\nEnter no :");
    scanf("%d",&iValue);
    
    bRet=Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divide by 5");
    }
    else 
    {
        printf(" Not Divide by 5");
    }
    return 0;
}