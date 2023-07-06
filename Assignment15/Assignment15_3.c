// Accept N number from user chk whether that numbers contain 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//step 5 : Perform the operation on array

bool Check(int Arr[],int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }   
    if(iCnt == iSize) // Mhnje tumhi akha loop firla ani tula number sapdla nahi
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0 ,iValue = 0 ,bRet = 0;


    printf("Enter number of element : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to findout the Occurance : \n");
    scanf("%d",&iValue);


    bRet = Check(ptr,iLength,iValue);
    if(bRet ==true)
    {
        printf("%d is Present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);        
    }


    free(ptr);

    return 0;
}