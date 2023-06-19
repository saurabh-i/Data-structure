//Write a programwhich accept once number from user and on its first 4 bits. Returen modified number.
#include<iostream>
using namespace std;
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0000   0000    1111           
                                                       0     F
*/
int ToggleBit(int no)
{
    int mask=0;
    int result=0;

    //making First 5 five bit 1
    mask = 0XF;
    
    //performing or operaction  OR- IF ANY ONE IS 1 THEN ONE|| IF BOTH ARE 1 THEN 1 AND ||IF BOTH ARE 0 THEN 0
    result = no | mask;

    return result;
}
int main()
{
    int no = 0;
    int iret=0;

    cout<<"\n Enter the number :";
    cin>>no;

    iret=ToggleBit(no);

    cout<<"\n After making first 4 bit 1 :"<<iret;
    return 0;
}
