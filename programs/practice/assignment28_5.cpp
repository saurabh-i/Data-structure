/*Write a program which accept one number from user and toggle contents of first and last nibble of the number .
Return modified number (Nibble is a group of four bits) */

#include<iostream>
using namespace std;
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    1111    0       0000      0      0000    0000   0000    1111 
    15                                                        15          
                                                               
*/
int OnBit(int iNo)
{
    int temp=iNo;
    int mask1=0xF;
    int mask2=0xF;
    int digit = 0;


}
int main()
{
    int no=0;
    int iret=0;
    int ipos=0;

    cout<<"\n Enter the Number :";
    cin>>no;

    iret=OnBit(no);

    cout<<"\n No after bit is become on :"<<iret;
    return 0;
}