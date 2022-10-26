// Function returning value in Recursion.
// Q. WAP to print addition of first n natural numbers recursively.

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
		return x+sum(x-1);
	}
}

int main()
{
	int n;
	cout<<"\nEnter the natural number : ";
	cin>>n;
	cout<<"\n\nAddition of first "<<n<<" natural numbers is : "<<sum(n); //we can pass function call to cout but
																		 //condition is that, fun must return something
	return 0;
}
