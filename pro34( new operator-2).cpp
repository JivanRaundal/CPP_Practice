//						new Operator
// 2nd syntax
// SYNTAX:-
//			1) pointer_var = new dataype[number_of_element]  //it is used to create one or more elements of given type.
//	    	2) pointer_var = new datatype(value)	//this syntax creates only one element of given datatype.

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int(10);	// it creates only one variable of type int at runtime & assigns it value 10.
	cout<<"\n*p = "<<*p;
	
	delete p;
	return 0;
}
