//Accept number of rows adn number of columns from user and display below pattern 
#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    char ch='a';
    for(i=1;i <= row;i++)
    {
        for(j=1;j <= col ;j++,ch++)
        {
            if((i % 2) !=0)
            {
                printf("\t%c",ch);
            }
            else{
                printf("\t%d",j);
            }
            
        }
        ch='a';
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