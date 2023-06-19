/*write a program which accept number from user and if number is less than
50 then print small ,if it is greater than 50 and less than 100 then print medium , if it is greater than 100 than print large
*/
#include<stdio.h>
void Display(int iNO)
{
    if(iNO < 50)
    {
        printf("Small");
    }else if(iNO > 50 && iNO < 100 )
    {
        printf("Medium");
    }else if(iNO > 100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue=0;
    printf("\nEnter number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}