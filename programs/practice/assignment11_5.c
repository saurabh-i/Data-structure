//Accept N numbers from user and return the producnt odd numbers 
#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>
int check(int arr[],int length)
{
    int iCnt=0;
    int product=1;
    for(iCnt=0;iCnt<length;iCnt++)
    {
        if((arr[iCnt] % 2)!= 0)
        {
            product=product * arr[iCnt];
        }
    }
    if(product == 1)
    {
        product=0;
    }
    
    return product;
}

int main()
{
    int iValue=0;
    int iCnt=0,NO=0;
    int *p=0;
    int bRet=0; 

    printf("\nEnter the size :");
    scanf("%d",&iValue);

    
    p=(int *)malloc(iValue * sizeof(int));

    for(iCnt=0;iCnt < iValue;iCnt++)
    {
        printf("\nEnter the number :");
        scanf("%d",&p[iCnt]);
    }

    bRet=check(p,iValue);
    
    printf("\n%d",bRet);

}