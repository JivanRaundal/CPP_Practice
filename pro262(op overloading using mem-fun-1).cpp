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
		Num operator-()
		{
			Num Temp;
			Temp.x = -x;
			Temp.y = -y;
			return Temp;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T,var;
	T.scan();
	//var = T.operator-();
	var = -T;
	cout<<"\nvar = ";
	var.show();
	cout<<"\nT = ";
	T.show();
	return 0;
}
