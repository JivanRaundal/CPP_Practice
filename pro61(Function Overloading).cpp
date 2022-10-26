/*						FUNCTION OVERLOADING
 DEFINATION = cpp allows us to define multiple functions with same name but with different parameter list.
 			  It is called as function overloading.
 A] The correct function defination will be chosen depending upon:-
 			i) Number of parameters
			ii) Datatype of parameters
 B] Function returntype does not play any role in function descision.
 c] Function overloading is an example of compile time polymorphism.
*/

#include<iostream>
using namespace std;

void add(int x,int y)
{
	cout<<"\n2 int = "<<x+y;
}

void add(int x,int y,int z)
{
	cout<<"\n3 int = "<<x+y+z;
}

void add(double x,double y)
{
	cout<<"\n2 double = "<<x+y;
}

int main()
{
	add(2,4,5);	//fun 2 will call
	add(6,7);	//fun 1 will call
	add(2.5,6.3);	//fun 3 will call
	return 0;
}
