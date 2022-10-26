//example-6

#include<iostream>
using namespace std;

void show(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<"\n"<<n;
		show(n-1);
	}
}

int main()
{
	int n;
	cout<<"\nEnter the number : ";
	cin>>n;
	show(n);
	cout<<"\nSTOP";
	return 0;
}
