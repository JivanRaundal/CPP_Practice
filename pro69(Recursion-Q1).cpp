// Q. Print 1 to 10 numbers using recursion.

#include<iostream>
using namespace std;

void print(int x)
{
	if(x==11)
	{
		return;
	}
	else
	{
		cout<<"\n"<<x;
		print(x+1);
	}
}

int main()
{
	cout<<"\nSTART";
	print(1);
	cout<<"\nSTOP";
	return 0;
}
