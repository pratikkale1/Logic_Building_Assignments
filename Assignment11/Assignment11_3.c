// Write a program which accept range from user and 
// return addition of that numbers in between that range
//Input : 23    30
//Output : 212

#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart<0)
    {
        printf("Invalid range");
                
    }
    else
    {

        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
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

    iRet = RangeSum(iValue1,iValue2);
    printf("Addition is %d",iRet);
    
    return 0;
}