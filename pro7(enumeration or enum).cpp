// enumeration [enum()] works for int datatype only, no other datatype is allowed.
//char is exception bcz char is internally considered as int only (ASCII) value.
//if no value is assgn to enum constant then--> value of const = value of prev const + 1.
//default value is 0,1,2,3,...and so on.
//we can assign explicit values also.

#include<iostream>
using namespace std;

enum color
{
	red,
	green=10,
	blue
};

int main()
{
	cout<<"\nRed = "<<red;
	cout<<"\nGreen = "<<green;
	cout<<"\nBlue = "<<blue;	// value of blue = value of green + 1 (by formula)
	return 0;
}
