    // Scan a range from user, print only even numbers in range recursively.

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x==y+1)
	{
		return;
	}
	else
	{
		if(x%2==0)
		{
			cout<<"\n"<<x;
		}
		print(x+1, y);
	}
}

int main()
{
	int a,b;
	cout<<"\nEnter range = ";
	cin>>a>>b;
	if(a<b)
	{
		print(a, b);
	}
	else
	{
		print(b, a);
	}
	cout<<"\nSTOP";
	return 0;
}
