// Accept total marks and Obtained marks from user and calculate percenrage
// Input 1000   745
//Output 74.5%

#include<stdio.h>

float Percentage(float iNo1,float iNo2)
{
    float fPer = 0.0;
    fPer = (iNo2/iNo1)*100;
    return fPer;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet=0.0;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is : %f",fRet);
    return 0;
}