//Accept distance in KM and convert it into meter
// 1 Kilometer = 1000 meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in Meter is : %d",iRet);

    return 0;
}