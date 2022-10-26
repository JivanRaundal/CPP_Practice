// Function returning values.
// Each function can return only single(only one) value.
// In functon returning value - datatype of function should be same as that of variable which is returned by function.
// function gets terminated once return statement is executed.

#include<iostream>
using namespace std;

int fun(int x, int y)
{
	int sum;
	sum = x+y;
	return sum;
}

int main()
{
	int a,b,ans;
	a=10;
	b=20;
	ans = fun(a,b);		// function returns the value of sum/var and not the actual variable
	cout<<"\nAddition : "<<ans;
	return 0; 
}
