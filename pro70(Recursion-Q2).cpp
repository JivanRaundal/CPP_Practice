// Q. For following main() fun, print 1 to 10 recursively.

#include<iostream>
using namespace std;

void print(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		print(x-1);
		cout<<"\n"<<x;
	}
}

int main()
{
	cout<<"\nSTART";
	print(10);		//given in question
	cout<<"\nSTOP";
	return 0;
}
