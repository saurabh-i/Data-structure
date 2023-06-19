//Accept number of rows adn number of columns from user and display below pattern 
#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    
    /*for(i=1;i <= row;i++)
    {
        for(j=1;j <= col ;j++)
        {
            if(i >= j)
            {
                printf("\t *");
            }else{
                printf("\t ");
            }
        }
        printf("\n");
        
    }*/

    for(i=1;i <= row;i++)
    {
        for(j=1;j <= i ;j++)
        {
            printf("\t*");
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