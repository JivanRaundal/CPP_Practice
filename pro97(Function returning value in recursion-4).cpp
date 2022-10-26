// Function returning value in Recursion.
// Q. WAP to print 5! (factorial of 5) recursively.

#include<iostream>
using namespace std;

int factorial(int x)
{
	if(x==5)
	{
		return 5;
	}
	else
	{
		return x * factorial(x+1);
	}
}

int main()
{
	int ans;
	ans = factorial(1);
	cout<<"\n5! = "<<ans;
	return 0;
}
