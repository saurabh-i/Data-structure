/*write N numbers form user and  11 is present and then return the frequency */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CalDiff(int arr[],int length)
{
    int iCnt=0;
    int bRet=0;
    for(iCnt =0;iCnt < length;iCnt++)
    {
        if(arr[iCnt]==11)
        {
            bRet++;
        }
    }
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