//Program to print 5 to 1 on screen 
#include<stdio.h>
void Display()
{
    int i=0;
    
    for(i=5;i>0;i--)
    {
        printf("\t%d",i);
    }
}
int main()
{
    Display();

    return 0;
}