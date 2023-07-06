//Write Application which accept File name from user and Create that File.

#include<stdio.h>
#include <fcntl.h>
#include<stdbool.h>

bool FileCreate(char *Fname)
{
	int Fd =0;
		
	Fd = creat(Fname,0777);
	
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
	
	bRet =FileCreate(Fname);
	
	if(bRet == true)
	{
		printf("File Successfully Created\n");
	}
	else
	{
		printf("Unable to Create File\n");
	}
	
	
	return 0;
}