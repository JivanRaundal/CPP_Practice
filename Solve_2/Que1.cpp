// Q 1] WAP to explain static members.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x;	//non-static datamember
		static int y;	//static datamember
		
		void set()
		{
			x = 0;
			y = 0;
		}
		static void change(Number & Temp)	//static member function
		{
			Temp.x = Temp.x + 1;
			y = y + 1;	//y is static, so no obbject required to access it.
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int Number::y = 10;	//static datamembers must be define OR declared outside the class also.

int main()
{
	Number T1,T2,T3;
	
	cout<<"\nstatic y = "<<Number::y;	//default value of static datamember is 0.
	
	T1.set();
	T2.set();
	T3.set();
	
	Number::change(T1);
	//T1.change(T1);	//we can also call static member fun using object & .(dot) operator, But no calling object 
						//will be available inside the static member function.
	T1.show();
	Number::change(T2);
	T2.show();
	Number::change(T3);
	T3.show();
	
	Number::y = 22;
	cout<<"\nT1.y = "<<T1.y<<"\tT2.y = "<<T2.y;	
	T3.y = 88;
	cout<<"\nNumber::y = "<<Number::y;	//changes made by any object in static datamember will get reflected in all 
										// objects of class.
	return 0;
}
