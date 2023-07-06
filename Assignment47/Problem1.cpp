// wrinte Generic program to multiply 2 Numbers;


# include<iostream>
using namespace std;

template<class T>
T Multiply(T No1, T No2)
{
	T Ans;
	
	Ans =No1*No2;
	
	return Ans;
	
}

int main()
{
	int iRet = Multiply(10,20);
	cout<<iRet<<endl;
	
	float fRet = Multiply(10.2f,20.4f);
	cout<<fRet<<endl;
	
	return 0;
}