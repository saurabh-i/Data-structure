//Accept number of rows adn number of columns from user and display below pattern 
#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    int start=1;
    for(i=1;i <= row;i++)
    {
        for(j=1;j <= col ;j++)
        {
            if((i % 2) != 0)
            {
                printf("%d",2*j);
            }
            else 
            {
                printf("%d",start);
            }
            start=start+2;
        }
        printf("\n");
        start=1;
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