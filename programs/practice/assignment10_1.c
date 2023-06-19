//accept N numbers from user and return frequecny of even numers
#include<stdio.h>
#include<stdlib.h>

int CountEven(int arr[],int Length)
{
    int iCnt=0;
    int frequency=0;
    for(iCnt = 0 ; iCnt < Length ;iCnt++)
    {
        if((arr[iCnt] % 2)==0)
        {
            frequency++;
        }
    }
    return frequency;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("\nEnte the size :");
    scanf("%d",&iSize);

    //Dynamic allocation of memory
    p=(int *)malloc(iSize * sizeof(int));

    for(iCnt =0;iCnt < iSize ;iCnt++)
    {
        printf("\nEnter the element :");
        scanf("%d",&p[iCnt]);
    }

    
    iRet=CountEven(p,iSize);
    printf("%d",iRet);
    return 0;

}