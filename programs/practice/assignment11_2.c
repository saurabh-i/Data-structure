//Accept N numbers from user and accept one another number as NO,return index of first occurrence of that NO
#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

typedef int BOOL;
int check(int arr[],int length,int no)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<length;iCnt++)
    {
        if(arr[iCnt] == no)
        {
            break;
        }
    }
    if(iCnt == length)
    {
        iCnt=-1;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iCnt=0,NO=0;
    int *p=0;
    int bRet=0; 

    printf("\nEnter the size :");
    scanf("%d",&iValue);

    printf("\nEnter NO:");
    scanf("%d",&NO);
    
    p=(int *)malloc(iValue * sizeof(int));

    for(iCnt=0;iCnt < iValue;iCnt++)
    {
        printf("\nEnter the number :");
        scanf("%d",&p[iCnt]);
    }

    bRet=check(p,iValue,NO);
    
    printf("\n%d",bRet);

}