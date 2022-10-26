// Global Variable:-   | 1)scope-->throughout the code.    |
//					   | 2)lifetime-->throughout the code. | 
//NOTE:- Global variables get memory on DATA SECTION while local variables get memory on STACK FRAME.
// (for understanding of this code refer to notebook(cpp class) global variable topics stack frame(memory).


#include<stdio.h>
#include<iostream>
using namespace std;

int global;    //global variable is declared outside any functon.

void my_fun()
{
	int a;	//this a is local to my_fun()
	a=10;
	global=10;
}

int main()
{
	int a=90;	//this a is local to main()
	global=90;
	
	cout<<"\nInside main a is: "<<a;
	cout<<"\nInside main global is: "<<global;
	
	my_fun();
	
	cout<<"\n\nInside main a is: "<<a;
	cout<<"\nInside main global is: "<<global;
	return 0;
}



