// 20. WAP to explain local and global variable with scope resolution operator.

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
	int g=90;	//local var(g) having same name as of global var
	cout<<"\nInside main() local g is: "<<g;	//it will print local g(90) bcz local>global
	
	my_fun();
	
	cout<<"\nInside main() global g is: "<<::g;	//to print global var :: op is used
	return 0;
}
