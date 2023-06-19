//Check whether 15'th and 18'th bit is on or off
#include<iostream>
using namespace std;
bool CheckBit(int no)
{
    int iMask =0x24000;
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