//Accept number of rows and number of coloums from user and display below pattern
#include<stdio.h>
void pattern(int row,int col)
{
    int i=0;
    int j=0;
    for(i = 1; i <= row ;i++)
    {
        for(j = 1; j <= col ;j++)
        {
            if((i == 1) || (i == row ) || (j == col) || (j == 1) )
            {
                printf("\t%d",j);
            }else if(i == j)
            {
                printf("\t%d",j);
            }else{
                printf("\t ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int rvalue=0;
    int cvalue=0;

    printf("\n Enter the rvalue :");
    scanf("%d",&rvalue);

    printf("\n Enter the cValue");
    scanf("%d",&cvalue);

    pattern(rvalue,cvalue);
    return 0;
}