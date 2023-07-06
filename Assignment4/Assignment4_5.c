// Write a program which accept numbers from user and display all its non factors

#include<stdio.h>

int FactDiff(int iNo)
{

    int iCnt=0;
    int iSum=0;
    int iAdd=0;
    int iDiff = 0;

    for(iCnt = 1 ; iCnt < iNo  ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    for(iCnt = (iNo -1) ; iCnt > 0 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            iAdd = iAdd + iCnt;
        }
    }

    iDiff = iSum-iAdd;

    return iDiff;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;

}