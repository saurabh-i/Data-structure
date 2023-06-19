//write a program which accept numbner from user and return the coutn of digits in between 3 and 7
#include<stdio.h>
int CountRange(int ino)
{
    int iDigit=0;
    int result=0;

    while(ino != 0)
    {
        iDigit=ino % 10;
        if(iDigit < 7 && iDigit > 3)
        {
            result++;
        }
        ino=ino/10;
    }
    return result;
}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("\nEnter the Nnmber ");
    scanf("%d",&ivalue);

    iRet=CountRange(ivalue);

    printf("%d",iRet);
    return 0;
}