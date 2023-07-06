//Accept N numbers from user and return frequency of even numbers

// N : 6
// Elements : 85    66  3   93  88
// Output : 3

#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iSize)
{
    int iCnt = 0 , iEvenCnt  = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0,iRet = 0;

    printf("Enter number of element : \n");
    scanf("%d",&iLength);


    ptr = (int *)malloc(iLength * sizeof(int));


    printf("Enter the element : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }


    iRet = CountEven(ptr,iLength);

    printf("Frequency of even number : %d\n",iRet);


    free(ptr);

    return 0;
}