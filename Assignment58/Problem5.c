// Write A program  which accept one file name and one count from user and  read and Display that  number of character.

#include<stdio.h>
#include<fcntl.h>

#define FILESIZE 1024

void DisplayN(char *Fname, int no)
{
	char data[FILESIZE];
	int Fd =0;
	int i=0, Count =0;
	int iRet =0;
	
	Fd = open(Fname,O_RDWR);
	
	if(Fd ==-1)
	{
		printf("Unable to open File\n");
		return;
	}
	
	
	
	while((iRet = read(Fd,data,sizeof(data)))!= 0)
	{
		//for(i =0 ; i< no ; i++)
		
			write(1,data,no);
		
	}
}
int main()
{
	char Fname[20];
	int iRet =0;
	int No =0;
	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	printf("Enter Number of character that you want read\n");
	
	scanf(" %d",&No);
	
	DisplayN(Fname,No);

	
	
	return 0;
}