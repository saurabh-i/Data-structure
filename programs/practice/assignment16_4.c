//Accept number of rows adn number of columns from user and display below pattern 
#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    for(i =row;i>0;i--)
    {
        for(j=1 ;j <= col;j++)
        {
            printf("\t%d",i);
        }
        printf("\n");
    }
}
int main()
{
    int ivalue=0;
    int ivalue1=0;

    printf("\n Enter the number of row and coloum :");
    scanf("%d %d",&ivalue ,&ivalue1);

    pattern(ivalue,ivalue1);
}