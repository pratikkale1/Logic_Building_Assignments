//Write Application which accept File name from user and read all the data from that file and Display content on screen.

#include<stdio.h>
#include<fcntl.h>

#define FILESIZE 1024

void Display(char *Fname)
{
	char data[FILESIZE];
	int Fd =0;
	int iRet =0; 
	Fd = open(Fname,O_RDONLY);
	
	if(Fd == -1)
	{
		printf("Unable to open the File\n");
		return;
	}
	
	printf("Data From File\n");
	
	while((iRet =read(Fd,data,sizeof(data)))!=0)
	{
		write(1,data,iRet);
	}	
}

int main()
{
	char Fname[20];

	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	Display(Fname);
	

	
	return 0;
}