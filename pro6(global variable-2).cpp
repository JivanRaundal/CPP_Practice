// In case when name of local & global variable is same, priority is given to local variable (local>global).
// In that case to access global variable scope resolution operator(::) is used.

#include<stdio.h>
#include<iostream>
using namespace std;

int g=10;	//global variable

void my_fun()
{
	cout<<"\nInside my_fun() g is: "<<g;	//prints global g
}

int main()
{
	int g=90;	//local g having same name as of global var
	cout<<"\nInside main() local g is: "<<g;	//it will print local g(90) bcz local>global
	
	my_fun();
	
	cout<<"\nInside main() global g is: "<<::g;	//to print global var :: op is used
	return 0;
}
