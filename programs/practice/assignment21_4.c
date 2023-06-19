/*Accept Character from user and check whether it is special symbol or not (! , @ , # , $ , % , ^ , & , *)*/
#include<stdio.h>
#include<stdbool.h>

bool ChkSymbol(char ch)
{
    bool bret=false;
    int icnt=0;
    /*if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') ||(ch == '^')||(ch == '&')||(ch == '*'))
    {
        bret = true;
    }*/

    /*for(icnt == 97 ; icnt  )
    {

    }*/
    return bret;
}
int main()
{
    char cvalue='\0';
    bool Bret=false;

    printf("\n Enter the character :");
    scanf("%c",&cvalue);

    Bret=ChkSymbol(cvalue);
    if(Bret == true)
    {
        printf("%c It is special character ",cvalue);
    }else{
        printf("%c  is not a special character ",cvalue);
    }
    return 0;
}