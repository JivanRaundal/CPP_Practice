//example-5

#include<iostream>
using namespace std;

void myfun(int x,int y)
{
	if(x>y)	// OR if(x==y+1) terminating condition	
	{
		return;
	}
	else
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
