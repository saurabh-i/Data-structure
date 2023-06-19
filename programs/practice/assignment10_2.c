/*write N numbers form user and return differenc bteween frequency of even number
 and odd nubers*/

#include<stdio.h>
#include<stdlib.h>
int CalDiff(int arr[],int length)
{
    int iCnt=0;
    int sumeven=0;
    int oddsum=0;
    for(iCnt =0;iCnt < length;iCnt++)
    {
        if((arr[iCnt] % 2)== 0)
        {
            sumeven++;
        }else if((arr[iCnt] % 2)!= 0)
        {
            oddsum++;
        }
    }
    return (sumeven - oddsum);
}
int main()
{
    int iSize=0;
    int iRet=0,iCnt=0;
    int *ptr=NULL;

    printf("\n Enter the size of array :");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));
    

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\nEnter the elemetn ");
        scanf("%d",&ptr[iCnt]);
    }

    iRet=CalDiff(ptr,iSize);
    printf("%d",iRet);
    return 0;
}