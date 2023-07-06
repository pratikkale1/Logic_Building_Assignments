
// Write recursive program
// input : abcdef
//  output : 6

#include<stdio.h>

int Display(char *ch)
{
	static int iCnt = 0;
	
	if(*ch != '\0')
	{	
		iCnt++;
		
		ch++;
		Display(ch);
	}


	return iCnt;
}
int main()
{
	char arr[30];
	int iRet =0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",arr);
	
	iRet = Display(arr);
	
	printf("No of Characters in String :%d ",iRet);
	
	return 0;
}