// 12. F]

#include<iostream>
using namespace std;

void disp(int & p, int & q)	// reference of reference var m & n
{
	p = 5;
	q = 8;
}

void show(int & m, int & n)	// refernce of a & b
{
	disp(m,n);
}

int main()
{
	int a=10, b=20;
	cout<<"\n"<<a<<" "<<b;
	show(a,b);
	cout<<"\n"<<a<<" "<<b;
	return 0;
}
