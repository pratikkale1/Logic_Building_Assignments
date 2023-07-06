
// Write  generic program to accept N value from user and search first occurrence of any Specific number.


# include<iostream>
using namespace std;

template<class T>

T SearchFirst(T crr[], int iSize, T no)
{
	int FirstOccr=0;
	int i =0;
	
	for(i=0; i<=iSize ;i++)
	{
		if(no==crr[i])
		{
			FirstOccr = i+1;
			break;
		}
	}

		return FirstOccr;
}

int main()
{
	int arr[]={10,40,30,40,50};
	float brr[] ={10.0f,3.7,9.8,8.7};
	
	int iRet = SearchFirst(arr,5,40);
	cout<<iRet<<endl;
	
	float fRet = SearchFirst(brr,4,10.0f);
	cout<<fRet<<endl;
	
	
	return 0;
}