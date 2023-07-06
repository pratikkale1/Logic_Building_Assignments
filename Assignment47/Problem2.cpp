// wrinte Generic program to find largest number from 3 numbers;


# include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
	T temp =No1;
	
	if(temp<No2)
	{
		temp = No2;
	}
	
	if(temp<No3)
	{
		temp = No3;
	}
	
	return temp;
	
}

int main()
{
	int iRet = Max(50,40,30);
	cout<<iRet<<endl;
	
	float fRet = Max(10.2f,20.4f,30.4f );
	cout<<fRet<<endl;
	
	return 0;
}