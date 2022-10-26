// Q 3].

#include<iostream>
using namespace std;

void print(int x,int y);	//prototype

int main()
{
	int a,b;
	cout<<"\nEnter range : ";
	cin>>a>>b;
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
	if(x == y+1)	//OR if(x > y)
	{
		return;
	}
	cout<<"\n"<<x;
	print(x+1, y);
}
