/*Write a programwhich acceept string from 
user revers that string in place */
#include<stdio.h>
int StrRevX(char *str)
{
    char *start=str;
    char *last=str;
    char temp='\0';

    while(*last != '\0')
    {
        
        last++;
    }
    last--;

    while(start < last)
    {
        
        temp = *start;
        *start = *last;
        *last =temp;

        start++;
        last--;

    }

}
int main()
{
    char arr[20];
    char cvalue='\0';
    
    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("\n Reverse string is :%s",arr);

    return 0;

}