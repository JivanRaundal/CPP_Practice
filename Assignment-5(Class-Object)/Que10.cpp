// Q 10]. Write a program to explain functions returning values by reference.

#include<iostream>
using namespace std;

int & fun(int & y)
{
	y = y + 10;
	return y;
}

int main()
{
	int x;
	int a = 9;
	cout<<"\nBefore fun() call a = "<<a;
	x = fun(a);
	cout<<"\nAfter fun() call a = "<<a;
	cout<<"\nIn main() x = "<<x;
	
	fun(a) = 90;	//we can assign constant value to fun call only when fun() returning value by reference
	cout<<"\nIn main() After assigning value to fun() call a = "<<a;
	return 0;
}
