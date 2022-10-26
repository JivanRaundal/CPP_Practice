//					OPERATOR OVERLOADING	
// Note - There are four tyes of operator overloading :-
// A) Using Member function - 1) Unary, 2) Binary
// B) Using Friend Function - 1) Unary, 2) Binary

// Overloading Binary Operator Using Friend function / Indepandent function :-
// Note - While overloading Binary operator, the two operands on which your operator is working must be passed as a paramter to your 
//        operator overloading function.
// example :- overloading of binary + operator.

#include<iostream>
using namespace std;

class Num
{
		int x,y;	//here, x & y are public, so we need of friend function
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		friend Num operator+(Num, Num);
};

Num operator+(Num Temp1,Num Temp2)
{
	Num T;
	T.x = Temp1.x + Temp2.x;
	T.y = Temp1.y + Temp2.y;
	return T;
}

int main()
{
	Num T1,T2,Ans;
	T1.scan();
	T2.scan();
	//Ans = operator+(T1,T2);
	Ans = T1 + T2;
	Ans.print();
	return 0;
}
