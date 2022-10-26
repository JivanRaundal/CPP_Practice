// Q 1].

#include<iostream>
using namespace std;

void print(int x)
{
	if(x == 11)
	{
		return;
	}
	cout<<"\n"<<x;
	print(x+1);
}

int main()
{
	print(1);
	return 0;
}
