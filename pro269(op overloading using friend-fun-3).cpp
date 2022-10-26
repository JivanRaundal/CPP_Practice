//					OPERATOR OVERLOADING	
// Note - There are four tyes of operator overloading :-
// A) Using Member function - 1) Unary, 2) Binary
// B) Using Friend Function - 1) Unary, 2) Binary

// Overloading Unary Operator Using Friend function / Indepandent function :-
// 1] While overloading unary operator using friend function, you must know that friend function of class is not member function of 
//    class. Hence, we cannot call that function using object of that class. So no any calling object is available in the function.
//    Hence, the object required by function must be passed as a parameter.
// 2] Unary operator needs only one operand. So, the only object required for your unary operator gets passed as a parameter to 
//    operator overloding function.
// Note - Instead of saying overloading using friend function, we have to say overloading using Independent function. We need to 
//        make it friend of the class only when private members in the class are to be accessed in that independent function.
// example :- overloading unary minus(-)

#include<iostream>
using namespace std;

class Num
{
		int x,y;	//here x & y are private, so friend function needed
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
		friend Num operator-(Num);	//making independent fun as a friend of class Num
};

Num operator-(Num Temp)
{
	Num T;
	T.x = -Temp.x;
	T.y = -Temp.y;
	return T;
}

int main()
{
	Num T,var;
	T.scan();
	//var = operator-(T);
	var = -T;
	cout<<"\nVar : ";
	var.print();
	cout<<"\nT : ";
	T.print();
	return 0;
}
