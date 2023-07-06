//Accept radius of circle from user and calculate area
// PI = 3.14 (Area = PI * Radius * Radius )

#include<stdio.h>

double CircleArea(float fRadius)
{
    float dArea = 0;
    double PI = 3.14;
    dArea = PI*fRadius*fRadius;

    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;


    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is : %lf",dRet);


}