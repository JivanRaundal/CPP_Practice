//				CLASS AND OBJECT
// STATIC MEMBER FUNCTION :-
// Note - We can call static member functions using object name & .(dot) operator. But in that case also static member
//        function works for class and no any calling object is availabel in function.
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
	static int x;	//static
	int y;	//non-static
	
	void set()	//non-static
	{
		x = 10;
		y = 10;	
	}
	
	static void change(Number & temp)	//static member function & (by refernce)
	{
		x = 20;	//static datamember is availabel & no need of object for it.
		//y = 30;	//error bcz y is non-static & it works for object only.
		temp.y = 30;	//valid
	}
	
	void show()	//non-static
	{
		cout<<"\nx = "<<x<<"\ty = "<<y;
	}
};

int Number::x;

int main()
{
	Number T1,T2;
	T1.set();
	T1.show();
	T1.change(T1);	//note
	T1.show();
	return 0;
}
