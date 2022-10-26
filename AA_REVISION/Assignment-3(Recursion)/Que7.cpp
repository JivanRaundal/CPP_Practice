// Q.7]

#include<iostream>
using namespace std;

int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

int main()
{
	int n, ans=0;
	cout<<"\nEnter the number : ";
	cin>>n;
	ans = fact(n);
	cout<<"\n"<<n<<"! = "<<ans;
	return 0; 
}
