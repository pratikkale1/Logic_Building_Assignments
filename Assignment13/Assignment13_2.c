// Accept number from user and return the count of odd digit

#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if (iNo == 0)
    {
        return 1;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %  2) == 1)
        {
            iCnt++;
        }
        iNo = iNo / 10 ;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbers");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}