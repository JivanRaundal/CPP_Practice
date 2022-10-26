// Q 8]. Find first n fibonacci terms using loop.

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter the number : ";
	cin>>n;
	
	int t1=0, t2=1, t3=0;
	cout<<"\nFirst "<<n<<" fibonacci terms are : \n";
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			cout<<t1<<" ";
			continue;
		}
		if(i==1)
		{
			cout<<t2<<" ";
			continue;
		}
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		cout<<t3<<" ";
	}

	return 0;
}
