//Write Application which accept File name from user and open that file into read mode.

#include<stdio.h>
#include <fcntl.h>
#include<stdbool.h>

bool FileOpen(char *Fname)
{
	int Fd = 0;
	
	Fd = open(Fname,O_RDONLY);
	
	if(Fd == -1)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}
int main()
{

	char Fname[20];
	bool bRet =false;
	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	bRet =FileOpen(Fname);
	
	if(bRet == true)
	{
		printf("File if Successfully Open.\n");
	}
	else
	{
		printf("Unable to open the File\n");
	}
	
	return 0;
}