#include<stdio.h>
#include<stdlib.h>

//step 5 : Perform the operation on array

void DisplayOddMult(int Arr[],int iSize)
{
    int iCnt = 0 , iOddSum = 1;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iOddSum = iOddSum * Arr[iCnt];
        }
     
    }

    printf("Product of Odd : %d\n",iOddSum);


}

int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0;

    // Step 1 : Accept size of array
    printf("Enter number of element : \n");
    scanf("%d",&iLength);

    //Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    //Step 3 : Accept the element of array
    printf("Enter the element : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //step 4 : Call the function
    DisplayOddMult(ptr,iLength);



    //step 6 : Deallocate the memory
    free(ptr);

    return 0;
}