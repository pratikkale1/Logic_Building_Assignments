// Accept amount in US dollar and return its corresponding value in Indian currency
// 1$ as 70 rupees
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRup = 0;
    iRup = iNo * 70;
    return iRup;
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}