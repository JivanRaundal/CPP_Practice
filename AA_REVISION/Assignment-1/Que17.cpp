// Q.17]

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter Number : ";
	cin>>n;
	
	cout<<"\n\nPrime numbers between 1 to "<<n<<" are :\n";
	for(int i=2; i<=n; i++)
	{
		int flag=0;
		for(int j=2; j<i; j++)	// for(int j=0; j<i/2; j++)
		{
			if(i % j == 0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)			//It is prime
		{
			cout<<" "<<i;
		}
	}
	
	cout<<"\n\nFirst "<<n<<" prime numbers are : \n";
	int count=0;
	for(int i=2; count!=n; i++)
	{
		int flag=0;
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
