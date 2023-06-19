//Write a program which check whethere 7th and 15'th 21'th , 28'th bit is on or off
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    1000    0001      0      0100     0       0100     0           
      0     8         1        0        4       0       4   0
*/

#include<iostream>
using namespace std;
bool CheckBit(int no)
{
    int iMask =0x8104040;
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
        cout<<"15'th and 18'th bit is on";
    }else{
        cout<<"15'th and 18'th bit is off";
    }
    return 0;
}