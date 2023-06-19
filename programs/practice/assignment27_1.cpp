//Write a program which accept one number from user and off 7th bit of that number if it is on Return modified number 
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0000   0100     0           
                                                    40
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

/*UINT CheckBit(int no)
{
    UINT mask =0X40;
    UINT Result = 0;

    mask = ~mask;

    Result = no & mask;
    
    return Result;

}*/
UINT CheckBit(int no)
{
    UINT mask =0X40;

    mask = ~mask;
   
    return no & mask;
}

int main()
{
    UINT ino=0;
    UINT iret = 0;

    cout<<"\n Enter the Number :";
    cin>>ino;

    iret=CheckBit(ino);

    cout<<"After 7th bit is off :"<<iret;
    return 0;
}