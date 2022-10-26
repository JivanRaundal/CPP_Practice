// Q.8]

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	cout<<"\nFibonacci Sequence :\n";
	int i=0;
	int t1=0,t2=1,t3=0;
	for(i=0; i<n; i++)
	{
		if(i == 0)
		{
			cout<<" "<<t1;
		}
		if(i == 1)
		{
			cout<<" "<<t2;
		}
		else
		{
			t3 = t1 + t2;
			t1 = t2;
			t2 = t3;
			cout<<" "<<t3;
		}
	}
}
