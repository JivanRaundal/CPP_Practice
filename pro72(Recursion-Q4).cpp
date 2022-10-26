// Q. WAP to print all numbers from 10 to 20 for following main() fun.

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x>y)	//or if(x==y+1)
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
	cout<<"\nSTART";
	print(10, 20);
	cout<<"\nSTOP";
	return 0;
}
