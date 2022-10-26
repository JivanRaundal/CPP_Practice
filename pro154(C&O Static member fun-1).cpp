//				CLASS AND OBJECT
// STATIC MEMBER FUNCTION :-
// 1] Static member function always work for a class. Hence to call it from non-member function, we have to use 
//    Membership Identity Label.
// 2] No any calling object is available in static member function. Hence, non-static members of class are not directly 
//    accessible from static member function. To access non-static members in static member function you have to use 
//    object name and .(dot) operator.
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
	Number::change(T1);	//change is static member fun of Number class & it works for class only & T1 is passed by ref.
	T1.show();
	
	return 0;	
} 
