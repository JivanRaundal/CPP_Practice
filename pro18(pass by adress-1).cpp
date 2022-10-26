//												PASS BY ADDRESS
// In pass by address - address of variable is passed in actual parameters.	eg- fun(&x,&y);
// Pointer variable is declared in formal parameter to store the address of variable. eg- fun(int *p, int *q);

#include<iostream>
using namespace std;

void my_fun(int *p)
{
	cout<<"\np = "<<p;
	cout<<"\n*p = "<<*p;
	*p = 7;				// value at adress of x is changed to 7
}

int main()
{
	int x=10;
	cout<<"\nBefore function call X = "<<x;
	
	my_fun(&x);
	cout<<"\nAfter function call X = "<<x;
	return 0;
}
