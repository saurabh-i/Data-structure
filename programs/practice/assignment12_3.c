//Accept N numbers from user and return the difference between largest and smalllest number 

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL maximum(int arr[],int length)
{
    
    int iCnt=0;
    int smallest=arr[iCnt];
    int largest=arr[iCnt];
    for(iCnt =0;iCnt < length;iCnt++)
    {
        if(arr[iCnt] > largest)
        {
            largest =arr[iCnt];
        }
        
        if(arr[iCnt] < smallest)
        {
            smallest =arr[iCnt];
        }
    }
    
    return (largest - smallest);
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
    printf("\n Difference between smalles and largest  :%d",iRet);
    free(p);
    return 0;
}