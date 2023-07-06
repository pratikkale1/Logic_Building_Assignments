
// Write recursive program
// input : a b c d e f
//  output : 5 count of white spacess

#include<stdio.h>

int CountWhiteSpace(char *ch)
{
	static int iCnt = 0;
	
	if(*ch != '\0')
	{	
		if(*ch ==' ')
		{
			iCnt++;
		}
		
		ch++;
		CountWhiteSpace(ch);
	}


	return iCnt;
}
int main()
{
	char arr[30];
	int iRet =0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",arr);
	
	iRet = CountWhiteSpace(arr);
	
	printf("No of white Spaces in String :%d ",iRet);
	
	return 0;
}