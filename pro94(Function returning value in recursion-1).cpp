// Function returning value in Recursion.
// Q. Print addition of 1 to 5 natural numbers recursively.

#include<iostream>
using namespace std;

int sum(int x)
{
	if(x==5)
	{
		return 5;
	}
	else
	{
		int y;
		y = sum(x+1);	// return x+sum(x+1);
		return x+y;
	}
}

int main()
{
	int add;
	add = sum(1);
	cout<<"\nAddition : "<<add;
	return 0;
}
