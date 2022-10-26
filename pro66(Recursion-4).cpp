//example-4

#include<iostream>
using namespace std;

void myfun(int x,int y)
{
	if(x<=y)
	{
		cout<<"\n"<<x;
		myfun(x+1, y);
	}
}

int main()
{
	cout<<"\nHello";
	myfun(1,4);
	cout<<"\nBye";
	return 0;
}
