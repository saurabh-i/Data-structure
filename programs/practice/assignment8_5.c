/*write a program which accept number from user and return the summecation
 between  summaction of even digit and odd digit */
#include<stdio.h>
int Display(int ino)
{
    int iDigit=0;
    int first=0;
    int second=0;
    while(ino != 0)
    {
        iDigit = ino % 10;
        if((iDigit % 2)== 0)
        {
            first=first+iDigit;
        }else if((iDigit % 2)!=0)
        {
            second=second+iDigit;
        }
        ino=ino / 10;
    }

    int result=first-second;
    return result;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter the Number :");
    scanf("%d",&iValue);

    iRet=Display(iValue);
    printf("%d",iRet);
    
    return 0;
}