// 17. WAP to print first n prime numbers.
// In this example inner loop is to check whether the number is prime or not, if not prime then is set's flag=1.
// & outer loop is to print the prime number. If it is checked by inner loop.

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter the number : ";
	cin>>n;
	
	int flag;
	int count=0;
	
	cout<<"\nPrime numbers between 1 to "<<n<<" are : \n";
	for(int i=2; i<=n; i++)
	{
		flag=0;
		for(int j=2; j<=i/2; j++)	// for(int j=0; j<i; j++) 
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<i<<" ";
		}
	}
	
	
	cout<<"\n\nFirst "<<n<<" prime numbers are : \n";
	for(int i=2; count!=n; i++)
	{
		flag=0;
		for(int j=2; j<=i/2; j++)	// for(int j=0; j<i; j++) 
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
			cout<<i<<" ";
		}
	}
	return 0;
}
