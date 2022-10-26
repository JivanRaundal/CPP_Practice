//							new Operator
// Q. for given main() function, scan two integers from user and print their addition.
//	  condition - do not use extra variable other than pointer_var.

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[2];
	
	cout<<"\nEnter the value of var 1 : ";
	cin>>*(p+0);
	cout<<"\nEnter the value of var 2 : ";
	cin>>*(p+1);
	
	cout<<"\n\nAddition : "<<*(p+0) + *(p+1);
	
	delete[] p;
	return 0;
}
