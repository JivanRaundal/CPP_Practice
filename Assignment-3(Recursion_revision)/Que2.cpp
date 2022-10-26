// Q 2].

#include<iostream>
using namespace std;

void print(int x)
{
	if(x == 0)
	{
		return;
	}
	print(x-1);
	cout<<"\n"<<x;		//will print x during backtracking
}

int main()
{
	print(10);
	return 0;
}
