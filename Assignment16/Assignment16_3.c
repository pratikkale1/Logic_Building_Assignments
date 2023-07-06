#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int CheckLastOccurance(int Arr[],int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize - 1 ; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }   
    return iCnt;

}

int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0 ,iValue = 0 ,iRet = 0;

    printf("Enter number of element : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to find out the last Occurance : \n");
    scanf("%d",&iValue);


    iRet = CheckLastOccurance(ptr,iLength,iValue);
    if(iRet == -1)
    {   
        printf("There is no %d  occured in the array\n",iValue);
        
    }
    else
    {
        printf("%d is occured in the array at last index %d\n",iValue,iRet);
                
    }

    free(ptr);

    return 0;
}