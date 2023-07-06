// Accept N number from useer and display all such elements which are divisible by 5
// N : 6
// Elements : 85    66  3   80  93  88
//Output : 85   80
#include<stdio.h>
#include<stdlib.h>

void DisplayDivisiblebyFive(int Arr[] ,int iLength)
{

    int iCnt = 0 , iDiv = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%5 ==0)
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