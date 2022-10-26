//												POINTER BASICS
//Pointer is the variable which stores the adress of another variable & its datatype should be same as that of
//vaiable whose adress it is storing.
//In this code typecasting (long long) is done to convert hexadecimal address into equivalent int.

#include<iostream>
using namespace std;

int main()
{
	int x = 10;		//simple variable(local)
	
	cout<<"\nAddress of x (&x) is: "<<(long long)&x;
	
	int *p;		//pointer to int (* is used to store the adress of simple variable)
	p = &x;		//pointer p stores the adress of x
	
	cout<<"\n\n&p = "<<(long long)&p;
	cout<<"\np = "<<(long long)p;
	
	int **q;	// ** is used to store the adress of single * pointer
	q = &p;
	
	cout<<"\n\n&q = "<<(long long)&q;
	cout<<"\nq = "<<(long long)q;
	
	int ***r;	// *** is used to store the adress of ** pointer
	r = &q;
	
	cout<<"\n\n&r = "<<(long long)&r;
	cout<<"\nr = "<<(long long)r;
	
	//* is value at operator, it gives the value at that pointer/variable
	//* is used with pointer or adress
	
	cout<<"\n\n*p = "<<*p<<"\t\t"<<"x = "<<x;
	cout<<"\n*q (value at q (i.e. address of p (in p address of x))) = "<<(long long)*q;
	cout<<"\n**q (value at (*q)) = "<<**q;
	cout<<"\n*r = "<<(long long)*r<<"\t\t"<<"**r = "<<(long long)**r<<"\t\t"<<"***r = "<<***r;
	return 0;
}
