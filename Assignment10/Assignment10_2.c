// Accept width and height of rectangle from user and calculate its area. (Area = width * Height)
// Area = Width * Height
//Input = 5.3   9.78
//Output = 51.834

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dRArea = 0.0;
    dRArea = fWidth*fHeight;
    return dRArea ;
}

int main()
{
    float fValue1= 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter Height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf(" Area of Rectangle is : %lf",dRet);

    return 0;
}