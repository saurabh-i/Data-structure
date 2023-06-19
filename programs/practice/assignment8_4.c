//write a program which accept number form user and return multipliction of all digits 
#include<stdio.h>
int MultDigit(int ino)
{
    
    int iDigit=0;
    int multiplication=1;

    while(ino != 0)
    {
        iDigit=ino % 10;
        if(iDigit == 0)
        {
            iDigit=1;
        }
        multiplication=multiplication * iDigit;
        ino=ino / 10;
    }
    return multiplication;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter the Number :");
    scanf("%d",&iValue);

    iRet=MultDigit(iValue);
    printf("%d ",iRet);

    return 0;
}