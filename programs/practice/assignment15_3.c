#include<stdio.h>
void pattern(int row ,int col)
{
    int i=0,j=0;
    for(i=1;i<= row;i++)
    {
        for(j=col;j > 0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int rvalue=0;
    int cValue=0;

    printf("\nEnter the row and col");
    scanf("%d %d",&rvalue,&cValue);

    pattern(rvalue,cValue);
}