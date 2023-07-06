// Accept area in square feet and convert it into square meter.(1 square feet = 0.0920 sqaure meter)
#include<stdio.h>

double SquareMeter(int iNo)
{
    float fSqrm = 0;
    
    fSqrm = iNo * 0.0920;
    return fSqrm;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet= SquareMeter(iValue);

    printf("Conversion is : %lf",dRet);

    return 0;
}