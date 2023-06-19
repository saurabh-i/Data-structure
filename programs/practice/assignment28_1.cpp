/*Write a program which accept one nuber and position from user and check whethere bit at
 that poistion is on or off it bitis one return TRUE otherwise return OFF*/
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0000   0000    1111           
                                                               1
*/
#include<iostream>
using namespace std;

bool ChekBit(int iNo , int iPos)
{
    int Mask=0X1;
    int result=0;

    //Moving at ipos 
    Mask = Mask << (iPos - 1);

    //performing & operaction
    result = iNo & Mask;

    if(result == Mask)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int no=0;
    int ipos=0;
    bool bret=0;

    cout<<"\nEnter the No :";
    cin>>no;

    cout<<"\n Enter the position :";
    cin>>ipos;

    bret=ChekBit(no,ipos);

    if(bret == true)
    {
        cout<<"\nTrue";
    }else{
        cout<<"\nFalse";
    }
    return 0;
}