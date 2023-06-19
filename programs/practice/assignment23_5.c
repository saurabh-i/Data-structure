/*Write a program which accept string from user and count number fo while spaces */

#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int counter=0;
    while(*str != '\0')
    {
        if(*str ==' ')
        {
            counter++;
        }
        str++;
    }
    return counter;
}
int main()
{
    char arr[20];
    int iret=0;    

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    iret=CountWhiteSpace(arr);
    printf("\nwhite spaces : %d",iret);

    return 0;
}