//write a program which accept number from suer and return the count of even digitts 
#include<stdio.h>
int CountEven(int ino)
{
    int iDigit=0;
    int EvenCount=0;
    if(ino < 0)
    {
        ino=-ino;
    }
    while(ino != 0)
    {
        iDigit=ino % 10;
        if((iDigit % 2)==0)
        {
            EvenCount++;
        }
        ino=ino/10;
    }
    return EvenCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\nEnter the nuber :");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);

    printf("%d",iRet);

    return 0;
}