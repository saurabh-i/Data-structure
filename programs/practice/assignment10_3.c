/*write N numbers  and check whether it contain 11 or not odd nubers*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CalDiff(int arr[],int length)
{
    int iCnt=0;
    bool bRet=false;
    for(iCnt =0;iCnt < length;iCnt++)
    {
        if(arr[iCnt]==11)
        {
            bRet=true;
            break;
        }
    }
    return bRet;
}
int main()
{
    int iSize=0;
    bool bRet=0;
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
    if(bRet== true)
    {
        printf("11  is present ");
    }
    else 
    {
        printf("11 is not present ");
    }
    return 0;
}