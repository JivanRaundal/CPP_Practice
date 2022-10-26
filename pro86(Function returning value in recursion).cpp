// Function returning value in Recursion.

#include<iostream>
using namespace std;

int myfun(int m)
{
	int y;
	if(m==3)
	{
		return 25;
	}
	else
	{
		y = myfun(m+1);		//or return myfun(m+1);
		return y;
	}
}

int main()
{
	int x;
	x = myfun(1);
	cout<<"\nx = "<<x;
	return 0;
}
