//Accept N numbers from user and perform substraction of even and odd number

// N : 6
// Elements : 85    66  3   93  88
// Output : 3

#include<stdio.h>
#include<stdlib.h>
int DiffEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0 , iEvenCnt  = 0 , iOddCnt = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    return iEvenCnt - iOddCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0,iRet = 0;

    printf("Enter number of element : \n");
    scanf("%d",&iLength);


    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }


    printf("Enter the element : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }


    iRet = DiffEvenOdd(ptr,iLength);

    printf("difference between Addition of Frequency of even and odd number : %d\n",iRet);


    free(ptr);

    return 0;
}