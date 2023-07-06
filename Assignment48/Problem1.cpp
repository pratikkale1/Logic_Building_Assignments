
// Write  generic program to accept N value and one number and print that value that no of time.


# include<iostream>
using namespace std;

template<class T>
void Display(T Value, int no)
{
	int i =0;
	
	
	for(i=1; i<=no ;i++)
	{
		cout<<Value<<"\t";
	}
	cout<<endl;

}

int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);
	
	return 0;
}