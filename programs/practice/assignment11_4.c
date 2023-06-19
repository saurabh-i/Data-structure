//Accept N numbers from user and accept the range Display all elemts from that range

#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>
void check(int arr[],int length,int start,int end)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<length;iCnt++)
    {
        if((arr[iCnt] > start )&&(arr[iCnt] < end))
        {
            printf("\t%d",arr[iCnt]);
        }
    }
}

int main()
{
    int iValue=0;
    int iCnt=0,Start=0,End=0;
    int *p=0;
    //int bRet=0; 

    printf("\nEnter the size :");
    scanf("%d",&iValue);

    printf("\nEnter start:");
    scanf("%d",&Start);

    printf("\nEnter End:");
    scanf("%d",&End);
    
    p=(int *)malloc(iValue * sizeof(int));

    for(iCnt=0;iCnt < iValue;iCnt++)
    {
        printf("\nEnter the number :");
        scanf("%d",&p[iCnt]);
    }

    check(p,iValue,Start,End);
    
    

}