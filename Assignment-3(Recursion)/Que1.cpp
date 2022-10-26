// Q 1]. WAP to print numbers from 1 to 10 recursively.

#include<iostream>
using namespace std;

void print(int n)
{
	if(n>10)
	{
		return;
	}
	else
	{
		cout<<"\n"<<n;
		print(n+1);
	}
}

int main()
{
	print(1);
	return 0;
}
