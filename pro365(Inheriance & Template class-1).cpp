// Inheritance In Templatized Class

// 1] Making Base Class Templatized & Inheriting it in Normal Derived Class :-
// Note - In this case we have to mention datatype for which base class will work when inheriting it in derived class.
// STYNAX => class derived : public Base<data_type> 	(base class is templatized hence, we hv to mention datatype)
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

class Derive : public Base<float>	//Note - we have to mention datatype of template argument of temlatized Base class
{									//       It can be any of <int>, <float>, <string> OR <user_define>
	public:
		int d;
		Derive() : Base(9.346)	//default const of Derive will call para const of Base class
		{
			d = 10;
		}
		void show()
		{
			cout<<"\nIn Derive show(), d = "<<d;
			print();	//valid
		}
};

int main()
{
	Derive obj;
	obj.show();
	obj.print();
	return 0;
}

