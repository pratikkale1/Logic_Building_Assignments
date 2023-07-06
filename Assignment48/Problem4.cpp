// Write  generic program to accept N value from user and search last occurrence of any Specific number.

# include<iostream>
using namespace std;

template<class T>

T SearchLast(T crr[], int iSize, T no)
{
	int LastOccr=0;
	int i =0;
	
	for(i=iSize-1; i>=0 ;i--)
	{
		if(no==crr[i])
		{
			LastOccr = i+1;
			break;
		}
	}

		return LastOccr;
}

int main()
{
	int arr[]={10,40,30,40,50};
	float brr[] ={10.0f,3.7,9.8,8.7};
	
	int iRet = SearchLast(arr,5,40);
	cout<<iRet<<endl;
	
	float fRet = SearchLast(brr,4,10.0f);
	cout<<fRet<<endl;
	
	
	return 0;
}