/*Writea program which accept string from user and accept one character 
return frequency of that character*/

#include<stdio.h>
#include<stdbool.h>

int ChkFrequncy(char *str,char ch)
{
    int bret=0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bret++;
        }
        str++;
    }
    if(bret == 0)
    {
        return -1;
    }else{
        return bret;
    }
}
int main()
{
    char arr[20];
    char ch='\0';
    int iret=0;

    printf("\n Enter the string :");
    scanf("%[^'\n']s",arr);

    fflush(stdin);
    
    printf("\n Enter the character :");
    scanf("%c",&ch);

    iret=ChkFrequncy(arr,ch);
    
    printf("Frequency of ch is :%d",iret);
    return 0;
}