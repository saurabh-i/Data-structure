//write a program which accept string from user and display it in it reverse order
#include<stdio.h>
void Reverse(char *str,char *brr)
{
    int length=0;
    //calculate the length and reach to end of string
    while( *str != '\0')
    {
        str++;
        length++;
    }    
    
    str--;

    while(length != 0)
    {
        *brr = *str;
        str--;
        brr++;
        length--;
    }
    *brr = '\0';
}
int main()
{
    char arr[20];
    char brr[20];

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    Reverse(arr,brr);

    printf("\n Reverse string is :%s",brr);

    return 0;
}