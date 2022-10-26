// Q. Keep scanning an integer from user until user enters -1 recursively.

#include<iostream>
using namespace std;

void myfun()
{
	int x;
	cout<<"\n\nEnter integer : ";
	cin>>x;
	cout<<"\nx = "<<x;
	
	if(x==-1)
	{
		return;
	}
	else
	{
		myfun();
	}
}

int main()
{
	myfun();
	return 0;
}
