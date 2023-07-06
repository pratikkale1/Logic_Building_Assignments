// Write  generic program to accept N value from user and return addition of that values// wrinte Generic program to find largest number from 3 numbers;


# include<iostream>
using namespace std;

template<class T>
T AddN(T crr[], int iSize)
{
	T sum;
	int i =0;
	
	
	for(i=0; i<iSize ;i++)
	{
		sum = sum+crr[i];
	}

		return sum;
}

int main()
{
	int arr[]={10,20,30,40,50};
	float brr[] ={10.0,3.7,9.8,8.7};
	
	int iSum = AddN(arr,5);
	cout<<iSum<<endl;
	
	float fsum = AddN(brr,4);
	cout<<fsum<<endl;
	
	return 0;
}