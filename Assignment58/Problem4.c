// Write A program  which accept one file name and one character rom user and  count number of occurence of that Character in the file

#include<stdio.h>
#include<fcntl.h>

#define FILESIZE 1024

int CountOccur(char *Fname, char ch)
{
	char data[FILESIZE];
	int Fd =0;
	int i=0, Count =0;
	int iRet =0;
	
	Fd = open(Fname,O_RDONLY);
	
	if(Fd ==-1)
	{
		printf("Unable to open File\n");
		return -1;
	}

	
	while((iRet = read(Fd,data,sizeof(data))) !=0)
	{
		
		for(i=0 ; i<iRet ; i++)
		{
			if((data[i] == ch)||(data[i] == ch+32)||(data[i] == ch-32))
			{
				Count++;
			}
		}
		
	}	
	
	return Count;
}
int main()
{
	char Fname[20];
	int iRet =0;
	char Ch ='\0';
	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	printf("Enter Character\n");
	
	scanf(" %c",&Ch);
	
	iRet = CountOccur(Fname,Ch);
	
	printf("No of Occurrence of %c in File : %d\n",Ch,iRet);
	
	
	return 0;
}