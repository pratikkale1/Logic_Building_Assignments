#include<stdio.h>
#include<stdlib.h>

int DiffMaxMix(int Arr[], int iSize)   // 5
{
    int iMin = Arr[0], iCnt = 0 ,  iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++) // N
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    for(iCnt = 0; iCnt < iSize; iCnt++)

        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax - iMin;

}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter number of elements : \n");    // 1
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength); // 2

    printf("Enter the elements : \n");      // 3
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

    iRet  = DiffMaxMix(ptr,iLength);   // 4

    printf("Difference is  : %d\n",iRet);

    free(ptr);      // 6

    return 0;
}