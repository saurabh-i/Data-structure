//accept one number form user and print that number of * on screen 
//Accept one number form suer and print that numebr of * on screen 
#include<stdio.h>
typedef int v;
void display(v iNO)
{
    while(iNO > 0)
    {
        printf("\t*");
        iNO--;
    }
}
int main()
{
    v iValue=0;

    printf("\nEnter the no:");
    scanf("%d",&iValue);

    display(iValue);
}