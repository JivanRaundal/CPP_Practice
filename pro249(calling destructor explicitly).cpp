//				DESTRUCTOR
// NOTE - Desturctor cannot be called explicitly like constructor.
//		  We can call destructor explicitly using object & .(dot) operator. But we have to suffer consequences(problems).
// example :-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		Num(int a)
		{
			x = a;
			cout<<"\nObject created";
		}
		~Num()
		{
			cout<<"\nObject destroyed";
		}
};

int main()
{
	Num T(5);
	//~Num();	//we cannot call destructor explicitly like this we have to use object & .(dot) operator
	T.~Num();	//calling destructor explicitly using object and .(dot) operator.
	/* Note - destructor will get called 2 times Bcz you are calling destructor explicitly at line-28 & when object
			  is about to go out of scope, Destructor will also be called automatically. */
	return 0;
}
