/*Write a program which accept one number and position from user and toggle that bit. Return modified number */
#include<iostream>
using namespace std;
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0000   0000    1111           
                                                               1
*/
int OnBit(int iNo,int ipos)
{
    int mask=0;
    int result=0;

    //Setting the mask default value
    mask = 0X1;

    //moving the 1 in mask to position using ipos
    mask = mask <<(ipos -1);

    //use XOR 
    result = iNo ^ mask;

    return result;
}
int main()
{
    int no=0;
    int iret=0;
    int ipos=0;

    cout<<"\n Enter the Number :";
    cin>>no;

    cout<<"\n Enter the position :";
    cin>>ipos;

    iret=OnBit(no,ipos);

    cout<<"\n No after bit is become on :"<<iret;
    return 0;
}