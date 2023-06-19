/*Write a program which accept string from user and convert it into lower case*/
#include<stdio.h>
void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }

}
int main()
{
    char arr[20];
    

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);

    printf("\nlower case streing :%s",arr);
    return 0;
}