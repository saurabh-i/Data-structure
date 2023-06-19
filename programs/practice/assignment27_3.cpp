//Write a program which accept one number from user and toggle the 7 bit of that no 
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0000   0100     0           
                                               00     40
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT CheckBit(int no)
{
    UINT mask =0X40;
    UINT Result = 0;

    Result = no ^ mask;
    
    return Result;

}

int main()
{
    UINT ino=0;
    UINT iret = 0;

    cout<<"\n Enter the Number :";
    cin>>ino;

    iret=CheckBit(ino);

    cout<<"After 7bit toggle :"<<iret;
    return 0;
}