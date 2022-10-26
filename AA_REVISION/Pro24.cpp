#include<iostream>
using namespace std;

template<class T>
class Base
{
	public:
		T x;
		Base()
		{
			cout<<"\nIn Base default";
		}
		Base(T a)
		{
			x = a;
		}
		void print()
		{
			cout<<"\nx = "<<x;
		}
};

template<class U>
class Derive : public Base<U>
{
	public:
		U d;
		Derive(U a) : Base<U>::Base(a)
		{
			d = a;
		}
		void print()
		{
			cout<<"\nd = "<<d;
			//Base<U>::print();
		}
};

int main()
{
	Derive<int> obj(20);
	obj.print();
	obj.Base::print();
	
	return 0;
}
