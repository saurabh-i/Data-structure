/*write a porgram whihc accept strin from user and count number of capital characters */
#include<stdio.h>
int CountCapitalletter(char *str)
{
    int counter=0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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


    iret=CountCapitalletter(arr);

    printf("\n No of Capital letter :%d",iret);
    return 0;
}