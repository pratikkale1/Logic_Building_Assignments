// Accept N numbers from user and accept one another number as No ,
// Check whether No is present or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength , int iNo)
{
    int i = 0;

    for(i = 0; i < iLength ; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
        if(i == iLength)
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }
    }
}

int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);



    p = (int *)malloc(iSize * sizeof(int));

    if (p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {

        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number %d is present",iValue);
    }
    else
    {
        printf("Number %d is not present",iValue);
    }

    free(p);
    return 0;


}



























