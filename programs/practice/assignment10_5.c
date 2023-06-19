//Accept N numbers form user and accpt on eanother number as NO, return frequecny of NO from it 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CalDiff(int arr[],int length,int ino)
{
    int iCnt=0;
    int bRet=0;
    for(iCnt =0;iCnt < length;iCnt++)
    {
        if(arr[iCnt]==ino)
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
    int NO=0;
    int *ptr=NULL;

    printf("\n Enter the size of array :");
    scanf("%d",&iSize);

    printf("Ente the NO :");
    scanf("%d",&NO);

    ptr=(int *)malloc(iSize * sizeof(int));
    

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\nEnter the elemetn ");
        scanf("%d",&ptr[iCnt]);
    }

    bRet=CalDiff(ptr,iSize,NO);
    printf("%d",bRet);
    return 0;
}