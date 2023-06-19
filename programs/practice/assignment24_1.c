/*Writea program which accept string from user and accept one character 
Check whether that cheracter is present in string or not*/

#include<stdio.h>
#include<stdbool.h>

bool ChkCharacter(char *str,char ch)
{
    bool bret=true;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bret=true;
            break;
        }
        str++;
    }
    return bret;
}
int main()
{
    char arr[20];
    char ch='\0';
    bool bret=false;

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    fflush(stdin);
    
    printf("\n Enter the character :");
    scanf("%c",&ch);

    bret=ChkCharacter(arr,ch);
    if(bret == true)
    {
        printf("\n Character is present ");
    }else {
        printf("\n Character is not present ");
    }
    return 0;
}