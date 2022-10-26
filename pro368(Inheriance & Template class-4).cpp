// Inheritance In Templatized Class

// 2] If Both Base class & Derived Class's are templatized, then :-
// Note - In this case we have to mention datatype for which base class will work when inheriting it in derived class.
// STYNAX => class derived : public Base<data_type> 	(base class is templatized hence, we hv to mention datatype)
// Note - If Derive class has smae function as of Base class then, priority is given to local function first.

// *RULE => In case of Templatized Base Class & Templatized Derived Class, Whenever you will call a function or
//			constructor of Base Class, you have to use 'Templatized Membership Identity Label'. eg - [Base<T>::]
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

template<class V>
class Derive : public Base<V>	//Note - Now, Base & Derive template arguments will have same type
{									
	public:
		V d;
		Derive(V a) : Base<V>::Base(a)		//Note = a should be of type V only
		{
			d = a;
		}
		void print()
		{
			cout<<"\nIn Derive print(), d = "<<d;
			//print();	//error It will recursively call itself
			Base<V>::print();	//templatized membership identity label
		}
};

int main()
{
	Derive <float>obj(10.56);
	obj.print();
	
	Derive <int>var(10);
	var.print();
	
	return 0;
}
