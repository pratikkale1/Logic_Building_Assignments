// Write a program which accept range from user and 
// return addition of even that numbers in between that range
//Input : 23    30
//Output : 108

#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt%2==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0,iValue2 = 0,iRet =0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    printf("Addition is %d",iRet);
    
    return 0;
}