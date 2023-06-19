/*Write a program which accept string from user accept one
 character. Return index of last occurance of that character*/

#include<stdio.h>
int LastChar(char *str,char ch)
{
    int counter=0;
    int pos=0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            pos = counter;
        }
        counter++;
        str++;
    }
    return pos;
}
int main()
{
    char arr[20];
    char cvalue='\0';
    int ire = 0;

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    printf("\n Enter the character:");
    scanf(" %c",&cvalue);

    ire = LastChar(arr,cvalue);

    printf("\n Character location is%d",ire);

    return 0;

}