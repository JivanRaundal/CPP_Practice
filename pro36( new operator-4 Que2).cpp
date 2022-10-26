//						new operator
// Q. for given main() function, scan one integer from user and print it.
//    condition - do not use any extra variable other than pointer_var.

#include<iostream>
using namespace std;

int main()
{
/*
	int *p;		// In this code p stores Garbage Address as it has no any address to store.
	cin>>*p;	// NOTE:- system does not allow to access garbage values address & hence this code gives folln errors...
	cout<<*p;	// ---> 1] returned value other than 0
	return 0;	// ---> 2] program.exe has stopped working
*/

	// correct code
	int *p;
	p = new int();	// OR p = new int[1];
	cout<<"\nEnter the value : ";
	cin>>*p;
	cout<<"\n*p = "<<*p;
	
	delete p;
	return 0;
}
