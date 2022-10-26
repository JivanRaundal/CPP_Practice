// Q 6] WAP to explain default arguments.

#include<iostream>
using namespace std;

void myfun(int a,int b,int c=10, int d=19)
{
	cout<<"\na = "<<a<<"\tb = "<<b<<"\tc = "<<c<<"\td = "<<d;
}

int main()
{
	myfun(2,3);
	myfun(7,9,4);
	myfun(45,67);
	myfun(5,8,6,3);
	
	return 0;
}
