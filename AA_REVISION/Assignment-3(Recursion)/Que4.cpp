// Q.4]

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x > y)
	{
		return;
	}
	else
	{
		if(x%2 == 0)
		{
			cout<<x<<endl; 
		}
		print(x+1, y);
	}
}

int main()
{
	int a,b;
	cout<<"\nEnter range : ";
	cin>>a>>b;
	if(a < b)
	{
		print(a, b);
	}
	else
	{
		print(b, a);
	}
	return 0;
}
