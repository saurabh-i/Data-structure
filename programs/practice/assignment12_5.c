//Accept N numbers fromusera dn display all such umbers which contain 3 digits in it 

#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

void check(int arr[],int length)
{
    int iCnt=0;
    int iDigit=0;
    int sum=0;
    for(iCnt=0;iCnt<length;iCnt++)
    {
        while(arr[iCnt] !=0)
        {
            iDigit=arr[iCnt] % 10;
            sum=sum + iDigit;
            arr[iCnt]=arr[iCnt] / 10;
        }

        printf("\nsum of %d Digit is %d",arr[iCnt],sum);
        sum=0;
    }    
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

    check(p,iValue);
    
    free(p);

}