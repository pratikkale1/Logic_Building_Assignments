//write a program which display below pattern
//5 4 3 2 1

#include<stdio.h>

void Display()
{
	static int iCnt =5;
	
	if(iCnt!=0)
	{
		printf("%d\t",iCnt);
		
		iCnt--;
		
		Display();
	}
}

int main()
{
	Display();
	
	return 0;
}