#include<stdio.h>
void patter(int row,int col)
{
    int i=0;
    int j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\t %d",j);
        }
        printf("\n");
    }
}
int main()
{
    int iValue=0,iValue2=0;
    printf("Enter the toatl no of rows and cols");
    scanf("%d %d",&iValue,&iValue2);

    patter(iValue,iValue2);
}