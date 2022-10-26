// example-2

#include<iostream>
using namespace std;

void myfun(int x)
{
	cout<<"\n"<<x;
	if(x<4)
	{
		x=x+1;
		myfun(x);
	}
	cout<<"\n"<<x;
}

int main()
{
	cout<<"\nHello";
	myfun(1);
	cout<<"\nBye";
}
