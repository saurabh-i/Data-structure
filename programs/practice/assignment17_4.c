//Accept number of rows adn number of columns from user and display below pattern 
#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    int no=-1;
    for(i=1;i <= row;i++)
    {
        for(j=1;j <= col ;j++,no--)
        {
            if((i % 2) != 0)
            {
                printf("\t%d",j);
            }else{
                printf("\t%d",no);
            }
                        
        }
        no=-1;
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