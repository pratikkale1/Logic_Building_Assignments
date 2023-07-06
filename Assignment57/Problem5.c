//Write Application which accept File name and one sring and wirte that string into that File.

#include<stdio.h>
#include<fcntl.h>
#include <string.h>

void WriteString(char *Fname, char *str)
{
	int Fd = 0;
	
	Fd = open(Fname,O_RDWR | O_APPEND);
	
	if(Fd == -1)
	{
		printf("Unable to open the File\n");
		return;
	}

	write(Fd,str,strlen(str));
	
}

int main()
{
	char Fname[30];
	char arr[50];

	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	
	printf("Enter String\n");
	scanf("%s",arr);
	
	WriteString(Fname,arr);
	
	return 0;
}