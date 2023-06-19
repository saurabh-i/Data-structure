//Accept character from user . if character is small display its correspoiding capital character
//and if it small then display its corresponding capital. In other cases display as it is.
#include<stdio.h>
void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("\n Character will be :%c",ch+32);
    }else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("\n Character will be :%c",ch - 32);
    }
}
int main()
{
    char cvalue='\0';

    printf("\n Enter the character :");
    scanf("%c",&cvalue);

    Display(cvalue);
    return 0;
}