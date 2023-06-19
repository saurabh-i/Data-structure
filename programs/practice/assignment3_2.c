//write a program which accept number form user and display its factors in decreasing order
#include<stdio.h>
void FactRev(int iNO)
{
    int iCnt=0;
    for(iCnt=(iNO/2); iCnt > 0;iCnt-- )
    {
        if((iNO % iCnt)==0)
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

    FactRev(ivalue);
    return 0;
}