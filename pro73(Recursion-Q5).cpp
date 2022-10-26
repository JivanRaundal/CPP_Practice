// Q. Scan a range from user, print all the numbers recursively.
//	 Note:- user may enter small value first, it's your responsibilty to handle situation.

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x>y)
	{
		return;
	}
	else
	{
		cout<<"\n"<<x;
		print(x+1, y);
	}
}

int main()
{
	int a,b;
	cout<<"\nEnter range : ";
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
