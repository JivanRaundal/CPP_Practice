// Q.12]

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	int ans=0;
	while(n > 0)
	{
		ans = ans + n%10;
		n = n / 10;
	}
	cout<<"\nAddition = "<<ans;
	return 0;
}
