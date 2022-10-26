// cpp constant (const) keyword is use to create variables whose value cannot be changed.
// const variable is also called as read only variable.
// in cpp it is comulsary to initialize const (read only) keyword.

#include<iostream>
using namespace std;

int main()
{
	const int a=10;   //const int a; (a is not initialized)--> it will give error.
	cout<<"\na = "<<a;
	
	//a=15;			---> it will give error if try to change value of a.
	//cout<<"\na = "<<a;
	return 0;
}
