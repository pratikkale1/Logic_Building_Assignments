//write a program which display below pattern
//a b c d e f

#include<stdio.h>

void Display()
{
	static char Cnt ='a';
	
	if( Cnt!='g')
	{
		printf("%c\t",Cnt);
		
		Cnt++;
		
		Display();
	}
}

int main()
{
	Display();
	
	return 0;
}