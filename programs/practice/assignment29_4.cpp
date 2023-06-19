//write a program which accept one number , two positions from user and check whether bit at first or bit at second positoin is ON of OFF
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    000   0000    0000           
                                                                 
*/
#include<iostream>
using namespace std;
/*
bool ChkBit(int iNo,int ipos1,int ipos2)
{
    int result=0;
    int mask1=0x1;
    int mask2=0x1;

    mask1 = mask1 << (ipos1 - 1);
    mask2 = mask2 << (ipos2 - 1 );



    result = ((iNo & mask1)||(iNo & mask2));

    if(result == iNo)
    {
        return true;
    }
    else
    {
         false;
    }
}*/
bool ChkBit(int iNo,int ipos1,int ipos2)
{
    int result=0;
    int mask1=0x1;
    int mask2=0x2;

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
    int pos1=0,pos2=0;
    float fret = false;

    cout<<"\n Enter the Number :";
    cin>>no;

    cout<<"\n Enter the 1'st position :";
    cin>>pos1;

    cout<<"\n Enter the 2'nd position :";
    cin>>pos2;
    fret = ChkBit(no,pos1,pos2);
    if(fret == true)
    {
        cout<<"True";
    }else {
        cout<<"False";
    }

    return 0;
}