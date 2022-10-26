// Function returning values by reference.
// example of returning by value to understand difference.

//NOTE:- In this eg, myfun(a) = 90; is not possible bcz myfun(a) will return some constant value and we cannot assign
//		 constant value to another constant value. (i.e. 19=90) Not possible.
//       Constant value ko assgn ke right me nhi likh sakte.


#include<iostream>
using namespace std;

int myfun(int & y)	//reference of a 
{
	y = y+10;
	return y;
}

int main()
{
	int x;
	int a = 9;
	cout<<"\nIn main Before fun() a = "<<a;
	x = myfun(a);
	//myfun(a) = 90;	//error, we cannot do this in returning by value, But it's possible in returning by reference.
	cout<<"\nIn main After fun() a = "<<a;
	cout<<"\nIn main x = "<<x;
	return 0;
}
