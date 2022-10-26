/*
-----------------------------------------------------------------------------------------------------------------
|										*** References in C++ ***												|
| 1) References have no any independent memory allocation. For memory they depend on some other variable.		|
| 2) Reference variable at the time of declaration should be compulsory initialize.								|
|   & -> Reference operator (in this case)																		|
|	eg- y is reference of x																						|
| 3) any change made in any of one variable will get reflected in another variable.								|
| 4) You can create multiple references of one variable.														|
| 5) We can create multiple references of reference also.														|
| 6) You cannot create reference of whole array. But, you can create reference for individual element of array.	|
| 7) Reference of read only var(const var) must be read only. Means it must be declared with const variable.	|
| 8) We can create reference of pointers also. 																	|
| NOTE:- In case of reference variable we have multiple names for same memory locaion.				    		|
-----------------------------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int & y = x;	// y is reference of x	
	//int & y = 10;  --> gives error bcz you cannot initialize reference variable with value directly.	
	int & z = x;	// z is reference of x ( you can create multiple reference of one variable)
	
	cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;
	x=20;							   // also reflects in y & z
	cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;
	y=30;							   // also reflects in x & z
	cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;
	z=40;							  // also reflects in x & y
	cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;
	
	
	int & w = y;	// w is reference of reference var y (rule-5)
	cout<<"\n\ny = "<<y<<"\tw = "<<w;
	
	
	// You cannot create reference of whole array. But, you can create reference for individual element of array.
	int array[3] = {1,2,3};	// int array (array - set of elements of same type)
	//int & a = array;  --> error
	int & a = array[0];  // no error its valid (rule-6)
	cout<<"\n\nReference variable for array[0] element is, a = "<<a; // o/p = 1 (i.e. first element of array) 
	
	
	const int b = 11;	// const int var
	const int & c = b;	// correct declaration for const reference var (rule-7)
	cout<<"\n\nconst reference variable, c = "<<c;
	//int & c = b;  --> error (declaration must be const)
	
	
	int d = 21;
	const int & e = d;	// possible case
	/* (In above case you can change value of original var d, but you cannot change value of reference var e,
	   as it is declared const.)*/
	cout<<"\n\nd = "<<d<<"\te = "<<e;
	d = 22;	 // no error 
	//e = 23;	 --> error //(bcz e is declared const)
	cout<<"\nd = "<<d<<"\te = "<<e;
	
	
	// Reference of pointers
	int v = 44;
	int* p = &v;		//pointer to int var v
	int* & q = p;		//pointer q is reference of pointer p (rule-8)
	cout<<"\n\np = "<<(long long)p<<"\t&p = "<<(long long)&p;
	cout<<"\nq = "<<(long long)q<<"\t&q = "<<(long long)&q;
	cout<<"\n*p = "<<*p<<"\t*q = "<<*q;
	
	return 0;
}  
