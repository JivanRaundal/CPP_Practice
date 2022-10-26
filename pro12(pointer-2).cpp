// write a code to add & sub two integers using pointers.

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	a=10;
	b=20;
	
	int *p,*q;
	p=&a;
	q=&b;
	
	cout<<"\nAddition: "<<*p+*q;
	cout<<"\nSubstraction: "<<*p-*q;
	return 0;
	
}
