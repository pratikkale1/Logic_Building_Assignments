#include<iostream>
using namespace std;

void Display(int no)
{
	static int iCnt = 0;
	
	if(iCnt !=no)
	{
		cout<<"*"<<"\t";
		iCnt++;
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