// Q.13]

#include<iostream>
using namespace std;

int add(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n%10 + add(n/10);
	}
}

int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	
	cout<<"\nAddition = "<<add(n);
	
	return 0;
}
