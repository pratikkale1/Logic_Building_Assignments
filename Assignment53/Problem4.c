//write a program which display below pattern
//A B C D E F

#include<stdio.h>

void Display()
{
	static char Cnt ='A';
	
	if( Cnt!='G')
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