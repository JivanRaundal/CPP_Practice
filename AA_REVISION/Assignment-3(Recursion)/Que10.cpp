// Q.10]

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	if(n < 2)
	{
		cout<<"\nNeither prime nor composite";
		return 0;
	}
	
	int i,flag=0;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\nPrime";	
	}
	else
	{
		cout<<"\nNot Prime";
	}
	return 0;
}
