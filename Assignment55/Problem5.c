
// Write recursive program and return product of digits
// input : 523
// output : 30 Product of its Digit.

#include<stdio.h>

int Display(int no)
{
	int iDigit =0;
 	static int iProduct =1;
	
	if(no!= 0)
	{
		iDigit = no%10;
		
		iProduct =iProduct*iDigit;
		
		no = no/10;
		
		Display(no);
	}
	
	return iProduct;
}

int main()
{
	int iValue =0, iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = Display(iValue);
	
	printf("Product of its Digit :%d\n ",iRet);
	
	return 0;
}