//			INHERITANCE
// # Virtual Classes constructors :-
// Note - In multiple inheritance if some of the parent classes are inherited virtually then constructors for virtually
//        Inherited classes executes first in the order of Inheritance. & then, constructors for normally Inherited
//        classes execute in the order of their Inheritance.
// eg - class child : public p1, virtual public p2, public p3, virtual public p4
// Order of executing constructors = p2->p4->p1->p3
// Multiple Inheritance :- 1) virtual = sequentially in order of inheritance
//                         2) normal  = sequentially in order of inheritance
// eg-

#include<iostream>
using namespace std;

class p1
{
	public:
		p1()
		{
			cout<<"\nIn p1 default constructor";
		}
};

class p2
{
	public:
		p2()
		{
			cout<<"\nIn p2 default constructor";
		}
};

class p3
{
	public:
		p3()
		{
			cout<<"\nIn p3 default constructor";
		}
};

class p4
{
	public:
		p4()
		{
			cout<<"\nIn p4 default constructor";
		}
};

class child : public p1, virtual public p2, public p3, virtual public p4
{
	public:
		child()
		{
			cout<<"\nIn child default constructor";
		}
};

int main()
{
	child obj;
}

