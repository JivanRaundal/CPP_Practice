// 									PASSING PARAMETERS TO FUNCTION
// 1) ACTUAL PARAMETERS - parameters mentioned at function call are actual parameters.
// 2) FORMAL PARAMETERS - parameters mentioned at function defination are formal parameters.

#include<iostream>
using namespace std;

void my_fun(int x, int y)	//formal parameters
{
	int add,sub;
	add=x+y;
	sub=x-y;
	cout<<"\nAddition: "<<add;
	cout<<"\nSubstraction: "<<sub;
}

int main()
{
	int a,b;
	a=50;
	b=20;
	my_fun(a,b);	//actual parameters
	return 0;
}
