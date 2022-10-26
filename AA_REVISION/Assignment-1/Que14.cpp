// Q.14]

#include<iostream>
using namespace std;

int main()
{
	int base,pow;
	cout<<"\nEnter Base & Power : ";
	cin>>base>>pow;
	int i,ans = 1;
	for(i=1; i<=pow; i++)
	{
		ans = ans * base;
	}
	cout<<"\nAnswer = "<<ans;
	return 0;
}
