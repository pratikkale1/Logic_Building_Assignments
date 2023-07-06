
// Write recursive program
// input : Akshay
//  output : 5 small char.

#include<stdio.h>

int SmallChar(char *ch)
{
	static int iCnt = 0;
	
	if(*ch != '\0')
	{	
		if( *ch>='a' && *ch<='z')
		{
			iCnt++;
		}
		
		ch++;
		SmallChar(ch);
	}


	return iCnt;
}
int main()
{
	char arr[30];
	int iRet =0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",arr);
	
	iRet = SmallChar(arr);
	
	printf("No of Small Characters in String :%d ",iRet);
	
	return 0;
}