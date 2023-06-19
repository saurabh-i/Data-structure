/*Accep character from user . if it is capital then display all the characters from the input characters til Z. if input 
character is small then print all the characters in reveerse order til a. In other cases return directly */
#include<stdio.h>
void Display(char ch)
{
    char c='\0';
    if((ch >= 'A') && (ch <= 'Z'))
    {
        
        for(c = ch ; c <= 'Z' ; c++)
        {
            printf("%c ",c);
        }
    }else if((ch >= 'a') && (ch <= 'z'))
    {
        for(c = ch ; c >= 'a' ; c--)
        {
            printf("%c ",c);
        }
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