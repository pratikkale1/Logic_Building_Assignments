// Write A program  which accept file name from user and  count Number of Small  character from that file.

#include<stdio.h>
#include<fcntl.h>

#define FILESIZE 1024

int CountSmall(char *Fname)
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
			if(data[i]>='a'&& data[i]<='z')
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
	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	iRet = CountSmall(Fname);
	
	printf("Number of Small Characher : %d\n",iRet);
	
	
	return 0;
}