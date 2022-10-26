// Q 4].

#include<iostream>
using namespace std;

void print(int x,int y);	//prototype

int main()
{
	int a,b;
	cout<<"\nEnter range : ";
	cin>>a>>b;
	cout<<"\nEnven numbers in the range are :\n";
	if(a < b)
	{
		print(a,b);
	}
	else
	{
		print(b,a);
	}
	return 0;
}

void print(int x,int y)
{
	if(x > y)	//OR if(x == y+1)
	{
		return;
	}
	else
	{
		if(x%2 == 0)
		{
			cout<<"\n"<<x;
		}
		print(x+1, y);
	}
}
