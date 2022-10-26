// Function returning value by reference.

// NOTE 1]:- In this eg, we can do myfun(a)=90; bcz here myfun(a) does not return any constant value, But it returns the
//		  refernce valriable(ref_y) of y. So this will not give any error as assignment to variable is possible.
// SYNTAX OF FUN DECLARATION:- int & myfun(int & y);
// NOTE 2]:- In this case myfun(a) will return reference variable of y, and at line number 28 assign is ref-y=90;
// NOTE 3]:- Mentioning fun call on left side of assgn operator(=) is possible only when your function is returning
//			 value by reference. 

#include<iostream>
using namespace std;

int & myfun(int & y)	//NOTE (returning value by reference)
{
	y = y+10;
	return y;
}

int main()
{
	int x;
	int a = 9;
	cout<<"\nIn main Before fun() call a = "<<a;
	x = myfun(a);	//fun call
	cout<<"\nIn main After fun() call a = "<<a;
	cout<<"\nIn main x = "<<x;
	
	myfun(a) = 90;		//possible (NOTE) 	same as --> ref_y = 90;
	cout<<"\nIn main After Assignment a = "<<a;
	return 0;
}
