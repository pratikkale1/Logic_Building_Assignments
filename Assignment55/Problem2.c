
// Write recursive program
// input : 879
// output : 24 Summations of its Digit.

#include<stdio.h>

int Display(int no)
{
	int iDigit =0;
 	static int iSum =0;
	
	if(no!= 0)
	{
		iDigit = no%10;
		
		printf("%d\n",iDigit);
		
		iSum =iSum+iDigit;
		
		no = no/10;
		
		Display(no);
	}
	
	return iSum;
}

int main()
{
	int iValue =0, iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = Display(iValue);
	
	printf("Summations of its Digit :%d\n ",iRet);
	
	return 0;
}