//write a program which accept two numbers and check wherther numbers are equal or not 

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define False 0
BOOL ChkEqual(int iNO1, int iNO2)
{
    if(iNO1 == iNO2)
    {
        return TRUE;
    }
    else 
    {
        return False;
    }

    
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    BOOL bRet= False;

    printf("\nEnter 1 no :");
    scanf("%d",&iValue1);

    printf("Enter 2'nd NO :");
    scanf("%d",&iValue2);

    bRet= ChkEqual(iValue1,iValue2);

    if(bRet == TRUE )
    {
        printf("Equal ");
    }
    else{
        printf("Not Equal");
    }

}