//Accept N numbers from user and accept one another number as NO, chech wheher NO is present or not 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(int arr[],int length,int no)
{
    int iCnt=0;
    BOOL bRet=false;
    for(iCnt=0;iCnt<length;iCnt++)
    {
        if(arr[iCnt] == no)
        {
            bRet=TRUE;
            break;
        }
    }
    return bRet;
}

int main()
{
    BOOL iValue=0;
    BOOL iCnt=0,NO=0;
    BOOL *p=0;
    BOOL bRet=false; 

    printf("\nEnter the size :");
    scanf("%d",&iValue);

    printf("\nEnter NO:");
    scanf("%d",&NO);
    
    p=(BOOL *)malloc(iValue * sizeof(BOOL));

    for(iCnt=0;iCnt < iValue;iCnt++)
    {
        printf("\nEnter the number :");
        scanf("%d",&p[iCnt]);
    }

    

    bRet=check(p,iValue,NO);
    if(bRet==TRUE)
    {
        printf("\nPresenet ");
    }
    else {
        printf("\n not present ");
    }
    

}