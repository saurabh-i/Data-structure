/*Write a program which accept one number from user and count number of On (1) bits in it without using % and / operator */
#include<iostream>
using namespace std;
/*

    0000    0000    0000    0000    0000    0000    0000    0000    
                                                               
*/
int OnBit(int iNo)
{
    int temp=iNo;
    int mask=0X1;
    
    int result =0;           //storint the & operaction result
    int total=0;            //total no of 1
    int end=0;              //till end
    while(end != 32)
    {
        result = temp & mask;
        if(mask == result)
        {
            total++;
        }

        mask = mask << 1;       ////moving the mask;
        end++;
        result=0;
    }

    return total;
}
int main()
{
    int no=0;
    int iret=0;
    int ipos=0;

    cout<<"\n Enter the Number :";
    cin>>no;

    iret=OnBit(no);

    cout<<"\n No after bit is become on :"<<iret;
    return 0;
}