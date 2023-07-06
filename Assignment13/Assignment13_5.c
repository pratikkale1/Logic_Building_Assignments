// Accept number from user and return difference between summation of even and odd digit
#include<stdio.h>

int CountDiff(int iNo)
{
    int iEvenCnt = 0;
    int iDigit = 0;
    int iOddCnt = 0;
    int iESum = 0;
    int iOSum = 0;
    int iDiff = 0;
    

    if(iNo < 0) // Filter
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10; 
        if((iDigit % 2) == 0)
        {
            iESum = iESum + iDigit;
            iEvenCnt++;
        } 
        if((iDigit % 2) == 1)
        {
            iOSum = iOSum + iDigit;
            iOddCnt++;
        }      
    }
    iDiff = iESum - iOSum;

    return iDiff;   
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;

}