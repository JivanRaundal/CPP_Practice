// Inheritance In Templatized Class

// 1] Making Base Class Templatized & Inheriting it in Normal Derived Class :-
// Note - In this case we have to mention datatype for which base class will work when inheriting it in derived class.
// STYNAX => class derived : public Base<data_type> 	(base class is templatized hence, we hv to mention datatype)
// Note - If Derive class has smae function as of Base class then, priority is given to local function first.
// eg-

#include<iostream>
using namespace std;

template<class T>
class Base
{
	public:
		T x;
		Base()
		{
			cout<<"\nIn Base default constructor";
		}
		Base(T a)
		{
			x = a;
		}
		void print()
		{
			cout<<"\nIn Base print(), x = "<<x;
		}
};

class Derive : public Base<string>	//Note - we have to mention datatype of template argument of temlatized Base class
{									//       It can be any of <int>, <float>, <string> OR <user_define>
	public:
		int d;
		Derive() : Base("HELLO")	//default const of Derive will call para const of Base class
		{
			d = 10;
		}
		void print()
		{
			cout<<"\nIn Derive print(), d = "<<d;
			//print();	//error It will recursively call itself
			Base::print();
		}
};

int main()
{
	Derive obj;
	obj.print();
	
	//Note - to call Base print(), we have to use membership identity label (::)
	obj.Base::print();
	return 0;
}

