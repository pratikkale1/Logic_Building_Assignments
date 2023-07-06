// Write  generic program to accept N value from user and return Smallest no// wrinte Generic program to find largest number from 3 numbers;


# include<iostream>
using namespace std;

template<class T>
T Min(T crr[], int iSize)
{
	T MinNo =crr[0];
	int i =0;
	
	
	for(i=1; i<iSize ;i++)
	{
		if(MinNo>crr[i])
		{
			MinNo =crr[i];
		}
	}

		return MinNo;
}

int main()
{
	int arr[]={10,20,30,40,50};
	float brr[] ={10.0,3.7,9.8,8.7};
	
	int iSum = Min(arr,5);
	cout<<iSum<<endl;
	
	float fsum = Min(brr,4);
	cout<<fsum<<endl;
	
	return 0;
}