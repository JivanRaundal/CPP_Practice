// Q 2] WAP to explain scope resolution operator.

// Note - Scope resolution operator is used to access only global variable.

#include<iostream>
using namespace std;

int g = 10;	//global variable

int main()
{
	int g = 90;	//locan variable 
	
	cout<<"\nLocal g = "<<g;
	cout<<"\nGlobal g = "<<::g;
	return 0;
}
