// Write a program which accept numbers from user and return multiplication of all digit

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 1;
    int iSum = 1;

    if(iNo ==0) 
    {

        return 1 ;
    }    
    if(iNo < 0) 
    {

        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10 ;
        iSum = iSum * iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;

}