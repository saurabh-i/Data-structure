//write a program which accept nimber form user and coutn frequency of 2 in it 
#include<stdio.h>
int countTwo(int ino)
{
    int iDigit=0;
    int result=0;

    while(ino != 0)
    {
        iDigit=ino % 10;
        if(iDigit == 4)
        {
            result++;
        }
        ino = ino /10;
    }
    return result;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter the number :");
    scanf("%d",&iValue);

    iRet= countTwo(iValue);
    printf("%d",iRet);
    return 0;
}