/*Write a program which accept Two number from user and display the common number position*/
#include<iostream>
using namespace std;
/*

    0000    0000    0000    0000    0000    0000    0000    0000    
                                                               
*//*
void OnBit(int iNo1,int iNo2)
{

    //int iNo= iNo1 & iNo2;
    
    //int temp=iNo;
    int temp=iNo1 & iNo2;
    int mask=0X1;
    
    int result =0;           //storint the & operaction result
    int total=0;            //total no of 1
    int end=1;              //till end
    while(end != 33)
    {
        result = temp & mask;   
        if(mask == result)
        {
            total++;
            cout<<end<<"\t";
        }

        mask = mask << 1;       ////moving the mask;
        end++;
        result=0;
    }

    
}*/
void OnBit(int iNo1,int iNo2)
{
    int temp=iNo1 & iNo2;
    int mask=0X1;
    int result =0;           //storint the & operaction result
    int end=1;              //till end
    while(end != 33)
    {
        result = temp & mask;   
        if(mask == result)
        {
            cout<<end<<"\t";
        }
        mask = mask << 1;       ////moving the mask;
        end++;
    }

    
}
int main()
{
    int no=0,no2=0;
    int iret=0;
    int ipos=0;

    cout<<"\n Enter the Number :";
    cin>>no;

    cout<<"\n Enter the Number :";
    cin>>no2;

    OnBit(no,no2);
    return 0;
}