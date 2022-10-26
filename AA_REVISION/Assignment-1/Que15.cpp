// Q.15]

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\nEnter Number : ";
	cin>>num;
	
	if(num < 2)
	{
		cout<<"\nNot Prime";
		return 0;
	}
	
	int flag=0;	
	for(int i=2; i<num; i++)
	{
		if(num % i == 0)
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
