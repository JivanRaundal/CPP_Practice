// Q.11]

#include<iostream>
using namespace std;

void check_prime(int n,int i)
{
	if(i==n)
	{
		cout<<"\nPrime";
		return;
	}
	if(n%i == 0)
	{
		cout<<"\nNot Prime";
		return;
	}
	check_prime(n, i+1);
}

int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	
	check_prime(n, 2);
	return 0;
}
