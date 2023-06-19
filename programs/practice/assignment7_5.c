//write a program which accept umber form user and count frequency of sucn a digits which are less than 6
#include<stdio.h>
int icount(int ino)
{
    int iDigit=0;
    int result=0;
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit < 6)
        {
            result++;
        }
        ino = ino/10;
    }
    return result;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("\n Enter the number ");
    scanf("%d",&iValue);

    iRet=icount(iValue);
    printf("%d",iRet);
}