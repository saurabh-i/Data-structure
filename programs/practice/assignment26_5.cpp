//Write a program which check whethere 1'st and last bit is on or off
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    1000    0000    0000    0000    0000    0000    0000    0001           
      8      0       0        0      0        0       0         1     
*/
#include<iostream>
using namespace std;

typedef unsigned int UNIT;
bool CheckBit(int no)
{
    UNIT iMask =0x80000001;               //C = 12   1120
    UNIT result=0;

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
    UNIT ino=0;
    bool bret=false;

    cout<<"\n Enter the Number :";
    cin>>ino;

    bret=CheckBit(ino);

    if(bret == true)
    {
        cout<<"First and list bit is on";
    }else{
        cout<<"First and list bit is off";
    }
    return 0;
}