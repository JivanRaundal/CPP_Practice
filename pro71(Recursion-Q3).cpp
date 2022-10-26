// Q. WAP to print first n natural numbers recursively.

#include<iostream>
using namespace std;

void print(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		print(x-1);
		cout<<"\n"<<x;
	}
}

int main()
{
	int n;
	cout<<"\nEnter the number : ";
	cin>>n;
	print(n);
	cout<<"\nSTOP";
	return 0;
}
