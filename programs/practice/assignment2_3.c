//Accept on number form user if number is less than 10 then print "hellow" otherwise print "Demo"

#include<stdio.h>
void Display(int iNO)
{
    if(iNO < 10)
    {
        printf("Hello");
    }
    else 
    {
        printf("Demo");
    }
}
int main()
{
    int iValue=0;
    printf("\nEnter then no:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}