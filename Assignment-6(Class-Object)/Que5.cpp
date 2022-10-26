// Q 5] Write a program to print 1 to 10 without loop. (use recursion)

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
	print(1);
	return 0;
}
