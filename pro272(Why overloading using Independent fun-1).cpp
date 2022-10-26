// Q. Why to overload an operator using Indpendent function, when you can overload using member function also..?
// Note - While overloading Binary operator using member function, It is necessary that left hand side operand must be object of
//        the class in which operator overloading function is defined. But this cannot be the case all the time.
//        for eg - Ans = 5 + T1; Here, + operator cannot be overloaded using member function, Bcz 5 cannot be the calling object.
//        Hence, we need here Independednt Function (friend function).

// eg - need of operator overloading using friend/Independent Function :-

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
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		Num operator+(int a)	//Note - calling object for member function must be object only
		{
			Num T;
			T.x = x + a;
			T.y = y + a;
			return T;
		}
};

int main()
{
	Num T1,T2,Ans;
	T1.scan();
	//Ans = T1.operator+(5);	---(1)
	Ans = T1 + 5;	//No error	---(2)
	//Ans = 5 + T1;	//error, bcz left operand must be calling object in case of overloading using member function
	Ans.print();
	return 0;
}
