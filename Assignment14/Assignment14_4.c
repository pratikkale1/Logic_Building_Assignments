// Accept N number from user and display all such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void DisplayDivisiblebyFive(int Arr[] ,int iLength)
{

    int iCnt = 0 , iDiv = 0;
    printf("Number Divisible by 5 and 3 number : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%5 ==0 && Arr[iCnt]%3==0)
        {
            printf("%d\t",Arr[iCnt]);
        }        
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0 , i = 0;

    printf("Enter Size of element which you want \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter elements\n");
    for(i = 0;i < iSize ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayDivisiblebyFive(ptr,iSize);

    free(ptr);
     
    return 0;
}