
// Write  generic program to accept N value from user and count Frequency of any specific value.

# include<iostream>
using namespace std;

template<class T>

T Frequency(T crr[], int iSize, T no)
{
	int count=0;
	int i =0;
	
	for(i=0; i<=iSize ;i++)
	{
		if(no==crr[i])
		{
			count++;
		}
	}

		return count;
}

int main()
{
	int arr[]={10,40,30,40,50};
	float brr[] ={10.0f,3.7,9.8,8.7};
	
	int iRet = Frequency(arr,5,40);
	cout<<iRet<<endl;
	
	float fRet = Frequency(brr,4,10.0f);
	cout<<fRet<<endl;
	
	
	return 0;
}