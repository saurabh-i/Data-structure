/*Write a program which accept string from user and convert it into upper case*/
#include<stdio.h>
void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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