/*write a program which accept string from user and check whether it contains vovels in it or not*/
#include<stdio.h>
#include<stdbool.h>

bool ChkVovel(char *str)
{
    bool bret=false;
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||(*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bret = true;
            break;
        }
        str++;
    }
    return bret;
}
int main()
{
    char arr[20];
    bool iret=false;

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);


    iret=ChkVovel(arr);
    if(iret == true)
    {
        printf("\n %s contain vovel ",arr);
    }else{
        printf("\n %s not contin vovel ",arr);
    }
    
    return 0;
}