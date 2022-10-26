// Function returning value in Recursion.
// Q. For given main() fun, print addition of 1 to 10 numbers recursively.

#include<iostream>
using namespace std;

int sum(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		int y;
		y = sum(x-1);	//return x+sum(x-1);
		return x+y;
	}
}

int main()
{
	int add;
	add = sum(10);
	cout<<"\nAddition : "<<add;
	return 0;
}
