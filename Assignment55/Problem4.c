
// return Factorial;

#include<stdio.h>

int Factorial(int iNo)
{
	static int iFact =1;
	
	if(iNo>0)
	{
		iFact = iFact*iNo;
		iNo--;	
		Factorial(iNo);
	}
	return iFact;
}

int main()
{
	int iValue =0;
	int iRet = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Factorial is : %d\n",iRet);
	
	return 0;
}