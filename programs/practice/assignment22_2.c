/*write a porgram whihc accept strin from user and count number of Small characters */
#include<stdio.h>
int CountSmalletter(char *str)
{
    int counter=0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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


    iret=CountSmalletter(arr);

    printf("\n No of Capital letter :%d",iret);
    return 0;
}