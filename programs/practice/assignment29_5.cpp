//Write a program which accept one number from user and range of positions from user . TOggle all bits from that range
//Counting bits from left side 
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0000    0       0000      0      0000    0011   1110    0000           

*/

#include<iostream>
using namespace std;

int ToggleBit(int iNo,int start,int end)
{
    int result = 0;
    int mask=0x1;
    int temp = 0;
    mask = mask << (start -1);
    
    //making the mask
    while(start != end +1)
    {
        temp = temp | mask;
        mask = mask << 1;
        start++;
    }
    
    //cout<<"Mask :"<<temp;
    //temp = mask
    result = iNo ^ temp;

    return result;
}
int main()
{
    int no=0;
    int pos1=0,pos2=0;
    int iret = 0;

    cout<<"\n Enter the Number :";
    cin>>no;

    cout<<"\n Enter the Starting position :";
    cin>>pos1;

    cout<<"\n Enter the End position :";
    cin>>pos2;
    iret = ToggleBit(no,pos1,pos2);

    cout<<"After ToggleBit :"<<iret;

    return 0;
}