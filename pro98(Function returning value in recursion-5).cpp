// Function returning value in Recursion.
// Q. WAP to find n!. where n is taken from user.
// NOTE:- Think of 0!, i.e. if user enter n=0

#include<iostream>
using namespace std;

int factorial(int x)
{
	if(x==0)	//for n=0, i.e. 0!
	{
		return 1;
	}
	else
	{
		return x * factorial(x-1);
	}
}

int main()                   
{
	int n;
	cout<<"\nEnter the number whose factorial you want : ";
	cin>>n;
	cout<<"\n\nFactorial of "<<n<<" is : "<<factorial(n);	//bcz factorial(n) is returning some value so we can do this.
	return 0;
}
