// Accept N from user and print all odd numbers up to N
// 9
// 1 3 5 7 9

#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt%2 == 1)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}