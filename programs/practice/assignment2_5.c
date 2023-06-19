//accept number form user and check whether number is even or odd.
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define False 0
bool CheckOddEven(int iNO)
{
    if((iNO % 2)== 0)
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
    int iValue=0;
    bool iRet=0;

    printf("Enter no :");
    scanf("%d",&iValue);

    iRet=CheckOddEven(iValue);

    if(iRet == TRUE)
    {
        printf("\t%d is Even no ",iValue);
    }
    else 
    {
        printf("\t %d is not Even no ",iValue);
    }
    return 0;
}