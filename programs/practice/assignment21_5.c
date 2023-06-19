//Accept the character frmousern and display its ASCII value in decimal , otctal and hexdeciaml format

#include<stdio.h>
void DisplayASCII(char ch)
{
    printf("\n\tcharcter is :%c",ch);
    printf("\n\tcharcter is :%d",ch);
    printf("\n\tcharcter is :%o",ch);
    printf("\n\tcharcter is :%x",ch);
}
int main()
{
    char cvalue = '\0';

    printf("\n Enter the character :");
    scanf("%c",&cvalue);

    DisplayASCII(cvalue);
    return 0;
}