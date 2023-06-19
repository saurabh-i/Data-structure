/*Write a program which accept string frmo user and return difference between frequency of small characer and freuency of capital characters*/
/*write a porgram whihc accept strin from user and count number of capital characters */
#include<stdio.h>
int Difference(char *str)
{
    int Capitalcounter=0;
    int SmallCounter=0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            Capitalcounter++;
        }else if((*str >= 'a') && (*str <= 'z'))
        {
            SmallCounter++;
        }

        str++;
    }
    
    return SmallCounter - Capitalcounter;
}
int main()
{
    char arr[20];
    int iret=0;

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);


    iret=Difference(arr);

    printf("\n No of Capital letter :%d",iret);
    return 0;
}