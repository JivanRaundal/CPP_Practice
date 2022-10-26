// Q 4] scan a range from user. Print only even numbers in the range recursively.

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x>y)	//OR if(x==y+1);
	{
		return;
	}
	else
	{
		if(x%2==0)	//if even print
		{
			cout<<"\n"<<x;
		}
		print(x+1,y);
	}
}

int main()
{
	int a,b;
	cout<<"\nEnter the range : ";
	cin>>a>>b;
	if(a<b)
	{
		print(a,b);
	}
	else
	{
		print(b,a);
	}
}
