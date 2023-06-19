//Write a program whihc check whethether 15'th bit is On or Off 
#include<iostream>
using namespace std;

bool ChkBit(int no)
{
    if(no < 0)
    {
        cout<<"Invalid Number";
    }

    int iMask = 0X400;
    int result=0;

    result = no & iMask;

    if(result == iMask)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int No = 0;
    bool bret = false;

    cout<<"\n Enter the Number :";
    cin>>No;

    bret=ChkBit(No);

    if(bret == true )
    {
        cout<<"15'th bit is on";
    }else{
        cout<<"15'th bit is off";
    }
    return 0;
}