//Program to divide two numbers 
#include<stdio.h>
int Divide(int iNO1, int iNo2)
{
    int iAns=0;
    if( iNo2 < 0)
    {
        return -1;
    }
    iAns =iNO1 / iNo2;
    return iAns;
}
int main()
{
    int iValue1 =15, iValue2=3;
    int iRet =0;
    iRet= Divide(iValue1,iValue2);
    printf("%d", iRet);
}