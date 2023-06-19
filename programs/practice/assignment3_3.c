//write a program which accept number form user and display all it s non factos 
#include<stdio.h>
void NontRev(int iNO)
{
    int iCnt=0;
    for(iCnt = 2;iCnt <= iNO; iCnt++)
    {
        if((iNO % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int ivalue=0;

    printf("\t\nEnter number :");
    scanf("%d",&ivalue);

    NontRev(ivalue);
    return 0;
}