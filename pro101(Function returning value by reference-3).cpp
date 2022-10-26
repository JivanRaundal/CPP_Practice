// Function returning value by reference.

// NOTE:- When stackframe of fun()/greatest() gets destroyed, ref_y will remain as it is, Means it will not get destroyed
//        Bcz it refers to memory of b. i.e. it refers to memory of var which is declared in main(). so it will remain
//		  as it is till main() fun gets destroyed.
// Q. Find greatest of 2 numbers and return greatest number by reference.

#include<iostream>
using namespace std;

int & greatest(int & x, int & y)	//returning by reference
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a=10, b=20;
	greatest(a,b) = -1;	//greatest() will return reference of greater var and -1 will be assgn to that var.
	
	if(a==-1)
	{
		cout<<"\na is greater.";	
	} 
	else
	{
		cout<<"\nb is greater.";
	}
	return 0;
}
