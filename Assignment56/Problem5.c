
// Write recursive program
// input : 879
// output :  978 reverse 

#include<stdio.h>

int Reverse(int no)
{
	int iDigit =0;
 	static int iSum =0;
	static int iRev =0;
	if(no!= 0)
	{
		iDigit = no%10;
		
		iRev = iRev*10+iDigit;

		no = no/10;
		
		Reverse(no);
	}
	
	return iRev;
}

int main()
{
	int iValue =0, iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	
	printf("Reverse No :%d\n ",iRet);
	
	return 0;
}