//Write a program which check whethere 7th and 8'th 9'th bit is on or off
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0001    1100     0           
                                               1      8+4    0     
*/

#include<iostream>
using namespace std;
bool CheckBit(int no)
{
    int iMask =0x1C0;               //C = 12   1120
    int result=0;

    result = no & iMask;

    if(result == iMask)
    {
        return true ;
    }else{
        return false;
    }
}

int main()
{
    int ino=0;
    bool bret=false;

    cout<<"\n Enter the Number :";
    cin>>ino;

    bret=CheckBit(ino);

    if(bret == true)
    {
        cout<<"7th and 8'th 9'th bit is on";
    }else{
        cout<<"7th and 8'th 9'th bit is off";
    }
    return 0;
}