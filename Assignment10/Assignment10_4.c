// Accept temperature in Fahrenheit and convert it into celsius
// 1 celsius = (Fahrenheit - 32)* (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCels = 0.0;
    dCels = (fTemp - 32)*5/9;
    return dCels;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius is : %0.2f",dRet);
    return 0;
}