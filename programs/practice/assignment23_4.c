/*Write a program accept string from user and display only digits from that string */

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str <= '9') && (*str >= '0'))
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];
    

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);
    return 0;
}