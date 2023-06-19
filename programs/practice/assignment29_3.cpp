//write a program which accept one number from user and check whether 9 and 12 bit is on or off
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    1001   0000    0000           
                                                100  || 800                 
*/
#include<iostream>
using namespace std;

bool ChkBit(int iNo)
{
    int result=0;
    int mask1=0x100;
    int mask2=0x800;

    result = ((iNo & mask1)||(iNo & mask2));

    if(result == iNo)
    {
        return true;
    }
    else
    {
         false;
    }
}
int main()
{
    int no=0;
    int iret=0;
    float fret = false;

    cout<<"\n Enter the Number :";
    cin>>no;

    fret = ChkBit(no);
    if(fret == true)
    {
        cout<<"True";
    }else {
        cout<<"False";
    }

    return 0;
}