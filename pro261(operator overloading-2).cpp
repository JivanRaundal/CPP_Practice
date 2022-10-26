// 			OPERATOR OVERLOADING
// Note - There are four tyes of operator overloading :-
// A) Using Member function - 1) Unary, 2) Binary
// B) Using Friend Function - 1) Unary, 2) Binary

// Overloading Unary Operator Using Member function :-
// Note - for Overloading Unary Operator Using Member function, No of parameters - 0(zero)
// eg- overloading unary minus(-) using member function.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void operator-()
		{
			x = -x;
			y = -y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T;
	T.scan();
	T.show();
	//T.operator-();
	-T;		//here, T is calling object for operator overloading function
	T.show();
	return 0;
}
