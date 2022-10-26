// Revision - Recursion
// Q. Print addition of 1 to 10 numbers recursively.

#include<iostream>
using namespace std;

int sum(int x)
{
	if(x==10)
	{
		return 10;
	}
	else
	{
		return x + sum(x+1);
	}
}

int main()
{
	cout<<"\nAddition = "<<sum(1);
	return 0;
}
