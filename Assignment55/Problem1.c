
// Write recursive program
// input : 5
//  output : 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>

void Display(int no)
{
		
	if(no!= 0)
	{
		printf("%d\t*\t",no);
		
		no--;	
	
		Display(no);
	}
	
	
}

int main()
{
	int iValue =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}