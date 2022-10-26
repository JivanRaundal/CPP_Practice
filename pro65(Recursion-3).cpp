// example-3

#include<iostream>
using namespace std;

void myfun(int x)
{
	cout<<"\n"<<x;
	if(x>=1)
	{
		myfun(x-1);
	}
	cout<<"\n"<<x;
}

int main()
{
	cout<<"\nHello";
	myfun(3);
	cout<<"\nBye";
	return 0;
}
