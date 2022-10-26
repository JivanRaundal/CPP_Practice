// Q 11]. Scan a number from user. Check if it is prime or not recursively.

#include<iostream>
using namespace std;

void check_prime(int x,int n)
{
	if(x==n)
	{
		cout<<"\n"<<n<<" is prime number.";
		return;
	}
	if(n%x==0)
	{
		cout<<"\n"<<n<<" is not prime number.";
		return;
	}
	check_prime(x+1,n);
}

int main()
{
	int num;
	cout<<"\nEnter the number : ";
	cin>>num;
	
	// as 0 & 1 are neither prime nor composite
	if(num<2)
	{
		cout<<"\nInvalid number...";
		return 0;
	}	
	
	check_prime(2,num);
	return 0;
}
