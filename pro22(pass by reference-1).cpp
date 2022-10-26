//						PASSING PARAMETER BY REFERENCE (PASS BY REFERENCE)
// example:- In this eg x & y have same memory location

#include<iostream>
using namespace std;

void fun(int & y)	//In formal parameter, reference var is declared (y is reference of x) 
{
	y = 90;	// changes value of x also as both have same memory location
} 

int main()
{
	int x = 10;
	cout<<"\n\tBEFORE FUNCTION CALL";
	cout<<"\nx = "<<x;		//o/p = 10;
	
	fun(x);		//In actual parameter only var(i.e x) is passed for which reference var is created in formal parameter	
	
	cout<<"\n\tAFTER FUNCTION CALL";
	cout<<"\nx = "<<x;		//o/p = 90	
	return 0;
}
