
// Write recursive program
// input : 879
// output : 8 Laregst Didit

#include<stdio.h>

int LargeDigit(int no)
{
	int iDigit =0;
 	static int iSum =0;
	static int iLarge =0;
	if(no!= 0)
	{
		iDigit = no%10;
		
		if(iDigit>iLarge)
		{
			iLarge =iDigit;
		}
		
		no = no/10;
		
		LargeDigit(no);
	}
	
	return iLarge;
}

int main()
{
	int iValue =0, iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = LargeDigit(iValue);
	
	printf("Largest Digit :%d\n ",iRet);
	
	return 0;
}