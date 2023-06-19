//Write a program which accept one number and position from user and off that bit return modified number
#include<iostream>
using namespace std;
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0000   0000    1111           
                                                               1
*/
int ChkBit(int no,int ipos)
{
    int Mask=0X1;
    int result=0;

    //moving the mask (changing the position)
    Mask = Mask <<(ipos -1);
    Mask = ~Mask;

    result = no & Mask;
    return result;
}
int main()
{
    int no=0;
    int pos=0;
    int iret=0;

    cout<<"\n Enter the Number :";
    cin>>no;

    cout<<"\n  Enter the position :";
    cin>>pos;

    iret=ChkBit(no,pos);

    cout<<"\n After returning the number :"<<iret;
    return 0;
}