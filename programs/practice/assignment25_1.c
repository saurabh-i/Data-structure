//Accept number of rows and number of coloums from user and display below pattern
//        *       *       *       #
//        *       *       #       *
//        *       #       *       *
//        #       *       *       *

#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    for(i=row ;i > 0; i--)
    {
        for(j = 1 ;j <=col ;j++ )
        {
            if(i > j)
            {
                printf("\t*");
            }else if( i == j)
            {
                printf("\t#");
            }else if( i < j)
            {
                printf("\t*");
            }
        }
        printf("\n");
    }
}
int main()
{
    int rvalue=0;
    int cvalue=0;

    printf("\n Enter the rows :");
    scanf("%d",&rvalue);

    printf("\n Enter the col :");
    scanf("%d",&cvalue);

    pattern(rvalue,cvalue);
    return 0;
}