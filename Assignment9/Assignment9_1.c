// Write a program which accept number from user and display below pattern
//Input : 5
//Output : * * * * * # # # # #

#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;
    int i=0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        
        printf("*\t");
       
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);

    return 0;
}