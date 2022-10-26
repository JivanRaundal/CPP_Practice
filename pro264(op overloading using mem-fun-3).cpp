// 			OPERATOR OVERLOADING
// Note - There are four tyes of operator overloading :-
// A) Using Member function - 1) Unary, 2) Binary
// B) Using Friend Function - 1) Unary, 2) Binary

// Overloading Binary Operator Using Member function :-
// Note - While overloading binary operator, left hand side operand will be the calling object & right hand side operand will go
//        as a parameter.
// eg - overloading binary + operator using member function :-

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
		Num operator+ (Num Temp)
		{
			Num T;
			T.x = x + Temp.x;
			T.y = y + Temp.y;
			return T;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num T1,T2,T3,Ans;
	T1.scan();
	T2.scan();
	T3.scan();
	/* Note - for adding 3 object members we have to do 3 steps :- 
	Ans = T1.operator+(T2);
	Ans = Ans.operator+(T3);
	*/
	//But due to operator overloading we can do this :-
	Ans = T1+T2+T3;
	Ans.show();
	return 0;
}

