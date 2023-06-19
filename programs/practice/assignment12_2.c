#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL maximum(int arr[],int length)
{
    
    int iCnt=0;
    int result=arr[iCnt];
    for(iCnt =0;iCnt < length;iCnt++)
    {
        
        if(arr[iCnt] < result)
        {
            result =arr[iCnt];
        }
    }
    return result;
}
BOOL main()
{
    BOOL iSize=0,iCnt=0,iRet=0;
    BOOL *p=NULL;

    printf("\nEnter the Size :");
    scanf("%d",&iSize);

    //Dynamic allocation
    p=(BOOL *)malloc(iSize * sizeof(BOOL));

    for(iCnt = 0;iCnt <iSize;iCnt++ )
    {
        printf("\nEnter the number :");
        scanf("%d",&p[iCnt]);
    }

    iRet=maximum(p,iSize);
    printf("\t Smallest number :%d",iRet);
    free(p);
    return 0;
}