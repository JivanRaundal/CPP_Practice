// Q 1] For following main() function, scan 2 integers from user. Print their addition.
//      Do not use any extra variable.

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[2];
	cout<<"\nEnter 1st int : ";
	cin>>*(p+0);
	cout<<"\nEnter 2nd int : ";
	cin>>*(p+1);
	
	cout<<"\nAddition = "<<*(p+0) + *(p+1);
	
	delete[] p;
	return 0;
}
