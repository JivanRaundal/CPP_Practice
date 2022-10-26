//			OPERATOR OVERLOADING
// 1] The basic purpose of operator overloading is to treat user-defined datatype as a premitive datatype. Which makes your code
//    simple to write & understand.
// 2] Operator overloading is nothing but just a simple function call. But, that function gets called automatically/internally.
//    Hence, name of the function is predecided and it is, 'operator op' where, operator is keyword & op is operator to be overloaded.
//    eg - If you want to overload + operator then fun name is - operator +
//    Similarly, - => operator -, ++ => operator ++, etc...
// 3] Syntax :-  return_type operator op(parameter_list)
//               {	//code
//               }
// 4] In operator overloading only name of the function is predecided, definition of funtion is programmers responsibility.
// 5] While overloading an operator, programmer has to care that the basic meaning of operator will not change unless an until
//    it is necessary.
// 6] For operator overloading it is necessary that your operator is working with at least one user defined datatype variable.
// example - overloading of binary + operator 

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
		Num operator + (Num Temp)
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
	Num T1,T2,ans;
	T1.scan();
	T2.scan();
	//Ans = T1.operator+(T2); OR
	ans = T1 + T2;	//here T1 is calling object & T2 is passes as a parameter
	ans.show();
	return 0;
}

