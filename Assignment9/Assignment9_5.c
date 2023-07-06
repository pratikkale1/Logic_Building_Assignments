//Write a program which return difference between even factorial and odd factorial of given number

#include<stdio.h>

int FactoialDiff(int iNo)
{
    int iCnt = 0;
    
    int iEven = 1;
    int iOdd =1;
    
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    for(iCnt = 1 ; iCnt <= iNo;iCnt++) 
    {
        if(iCnt % 2 ==0)
        {
            iEven = iEven * iCnt;
        }

    }
    for(iCnt = 1 ; iCnt <= iNo;iCnt++) 
    {
        if(iCnt % 2 !=0)
        {
            iOdd = iOdd * iCnt;
        }

    }

    return iEven - iOdd;
}

int main()
{
    int iValue = 0,iRet =0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactoialDiff(iValue);

    printf("odd Factorial of number is : %d",iRet);

    return 0;
}