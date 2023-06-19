//write a program whihc displays ASCII taqble. Table conitans symbol, Decimal
//Hexadecimal and octal representatiaon of every member from 0 to 255
#include<stdio.h>
void DisplayASCII()
{
    int icount=0;

    printf("\n Character Decimal Hexadeciaml Octal");
    for(icount =0 ;icount <= 255 ; icount++)
    {
        printf("\n| %c |\t%d |\t%x |\t%o|",icount,icount,icount,icount);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}