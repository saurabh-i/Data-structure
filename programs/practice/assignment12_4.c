//Accept N numbers from user and display all such umbers which contain 3 digits in it 

#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

void check(int arr[],int length)
{
    int iCnt=0,icounter=0;
    int iDigit=0;
    int temp=0;
    for(iCnt=0;iCnt<length;iCnt++)
    {
        temp=arr[iCnt];
        while(temp != 0)
        {
            iDigit=temp % 10;
            icounter++;
            temp=temp / 10;
        }

        if(icounter == 3)
        {
            printf("\n %d",arr[iCnt]);
        }

        icounter=0;
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
    return 0;

}