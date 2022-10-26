// Q 16]. Keep Scanning a number from user until user enters -1 recursively.

#include<iostream>
using namespace std;

void scan()
{
	int x;
	cout<<"\nEnter the number : ";
	cin>>x;
	cout<<"\nx = "<<x;
	if(x==-1)
	{
		return;
	}
	scan();
}

int main()
{
	scan();
	return 0;
}
