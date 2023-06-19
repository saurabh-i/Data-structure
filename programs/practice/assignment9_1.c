//Accept N numbers from user and return difference between summation of evn elemnts and summation of odd elemets
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CalDiff(int arr[],int length)
{
    int iCnt=0;
    int bRet=0;
    int esum=0;
    int osum=0;
    for(iCnt =0;iCnt < length;iCnt++)
    {
        if((arr[iCnt] % 2)==0)
        {
            esum=esum+arr[iCnt];
        }
        else if((arr[iCnt] % 2)!=0)
        {
            osum=osum+arr[iCnt];
        }
    }
    bRet=esum-osum;
    return bRet;
}
int main()
{
    int iSize=0;
    int bRet=0;
    int iCnt=0;
    int *ptr=NULL;

    printf("\n Enter the size of array :");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));
    

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\nEnter the elemetn ");
        scanf("%d",&ptr[iCnt]);
    }

    bRet=CalDiff(ptr,iSize);
    printf("%d",bRet);
    return 0;
}