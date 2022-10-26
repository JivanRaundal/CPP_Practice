// Q.6]

#include<iostream>
using namespace std;

int add(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n + add(n-1);
	}
}

int main()
{
	int n,ans;
	cout<<"\nEnter the number : ";
	cin>>n;
	ans = add(n);
	cout<<"\nAddition = "<<ans;
	return 0;
}
