#include<iostream>
using namespace std;

void Display( int no)
{
	static int iCnt = 0;
	static char ch = 'a';
	
	if(iCnt < no)
	{
		cout<<ch<<"\t";
		iCnt++;
		ch++;
		Display(no);
	}
}
int main()
{
	int iValue =0;
	
	cout<<"Enter number"<<endl;;
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}