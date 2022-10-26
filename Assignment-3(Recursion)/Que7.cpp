// Q 7]. WAP to find n!

#include<iostream>
using namespace std;

int factorial(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		//return x * factorial(x-1);
		// Or
		int y;
		y = factorial(x-1);
		return x*y;
	}
}

int main()
{
	int n, fact;
	cout<<"\nEnter the number : ";
	cin>>n;
	fact = factorial(n);
	cout<<"\nFactorial of "<<n<<" is : "<<fact;
	return 0;
}
