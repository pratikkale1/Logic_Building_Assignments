//Write Application which accept File name from user and Display Size of that File.
#include<stdio.h>
#include<fcntl.h>

#define FILESIZE 1024

int FileSize(char *Fname)
{
	char data[FILESIZE];
	int Fd =0;
	int iRet =0;
	int iSize =0;
	
	Fd = open(Fname,O_RDONLY);
	
	if(Fd == -1)
	{
		printf("Unable to open the File\n");
		return -1;
	}
	
	while((iRet =read(Fd,data,sizeof(data)))!=0)
	{
		iSize =iSize+iRet;
	}
	
	return iSize;
	
}
int main()
{
	char Fname[20];
	int iRet =0;
	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	iRet = FileSize(Fname);
	
	printf("Size of File : %d bytes \n ",iRet);
	
	return 0;
}