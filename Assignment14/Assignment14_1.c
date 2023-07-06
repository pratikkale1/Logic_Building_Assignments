// Accept N Numbers from user and return difference btw summation of even elements and summation of Odd elements
// N : 6
//Elements : 85 66  33  80  93  88
// output : 53 (234-181) 
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0 , iEvenSum = 0 ,iOddSum = 0;

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }        
    }   
    return iEvenSum - iOddSum;
}

int main()
{
    int iSize = 0 ,iRet = 0 ,iValue = 0 , i = 0 ;
    int *p = NULL;

    printf("Enter numbers of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements");

    for(i = 0 ; i < iSize ; i++)
    {
        scanf("%d",&p[i]);
    }
    iRet = Difference(p,iSize);

    printf("result is %d",iRet);

    free(p);

    return 0;
}

