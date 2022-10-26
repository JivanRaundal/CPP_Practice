//					CONSTRUCTORS
// Note - Constructor Types => 1) default constructor, 2) parameterized constructor & 3) copy constructor.
// # default constructor :-
// 1] constructor without any parameter is called default constructor.
// 2] When we do not mentioned any constructor in our class, compiler automatically provides one default constructor.
// 3] But, if we mentioned any constructor explicitly in our class, then compiler will not provide default constructor.
//    In that case, You have to define default constructor if you need it.
// Note - Q. when should I mention default constructor compulsary..?
// 		  Ans-> If following 2 conditions are True simultaneously.
//              1) We are creating an object which need default constructor.
//              2) We have mentioned parameterized or copy constructor in our class.
// Note - If any of above 2 condition is false, you do not need to mentioned default constructor compulsary.
// example:-


#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		Num()	// default constructor
		{
			cout<<"\nIn default constructor.";
		}
		
		Num(int a,int b)	// parameterized constructor
		{
			cout<<"\nIn parameterized constructor.";
		}
};

int main()
{
	Num obj;	// object which needs default constructor
	return 0;
}
