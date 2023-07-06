// Write  generic program to accept N value from user and reverse the content

# include<iostream>
using namespace std;

template<class T>

T reverse(T crr[], int iSize, T no)
{
	int FirstOccr=0;
	int i =0;
	
	for(i=iSize-1; i>=0 ;i--)
	{
		cout<<crr[i]<<'\t';

	}
	cout<<endl;

		return FirstOccr;
}

int main()
{
	int arr[]={10,40,30,40,50};
	float brr[] ={10.0f,3.7,9.8,8.7};
	
	reverse(arr,5,40);
	reverse(brr,4,10.0f);
	
	
	return 0;
}