#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//step 5 : Perform the operation on array

int CheckOccurance(int Arr[],int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }   
    if(iCnt == iSize) // Mhnje tumhi akha loop firla ani tula number sapdla nahis
    {
        return -1;
    }
    else
    {
        return iCnt;
    }

}

int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0 ,iValue = 0 ,iRet = 0;

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
    printf("Enter the element to findout the Occurance : \n");
    scanf("%d",&iValue);


    //step 4 : Call the function
    iRet = CheckOccurance(ptr,iLength,iValue);
    if(iRet == -1)
    {   
        printf("There is no %d  occured in the array\n",iValue);
        
    }
    else
    {
        printf("%d is occured in the array at index %d\n",iValue,iRet);
                
    }

    //step 6 : Deallocate the memory
    free(ptr);

    return 0;
}