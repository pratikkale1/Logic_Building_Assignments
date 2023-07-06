// Write  generic program to accept N value from user and return maximum no// wrinte Generic program to find largest number from 3 numbers;


# include<iostream>
using namespace std;

template<class T>
T Max(T crr[], int iSize)
{
	T MaxNo =crr[0];
	int i =0;
	
	
	for(i=1; i<iSize ;i++)
	{
		if(MaxNo<crr[i])
		{
			MaxNo =crr[i];
		}
	}

		return MaxNo;
}

int main()
{
	int arr[]={10,20,30,40,50};
	float brr[] ={10.0,3.7,9.8,8.7};
	
	int iSum = Max(arr,5);
	cout<<iSum<<endl;
	
	float fsum = Max(brr,4);
	cout<<fsum<<endl;
	
	return 0;
}