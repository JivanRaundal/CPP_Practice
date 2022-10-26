// Q 9] WAP to explain references of pointers.

#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	int & y = x;	//y is reference of x
	cout<<"\nx = "<<x<<"\ty = "<<y;
	
	int * p;
	p = &x;	//pointer to x
	
	int * & q = p;	//q is reference of pointer p
	
	cout<<"\np = "<<(long long)p<<"\t*p = "<<*p;
	cout<<"\nq = "<<(long long)q<<"\t*q = "<<*q;
	return 0;
}
