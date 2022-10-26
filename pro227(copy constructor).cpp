//					CONSTRUCTORS
// Note - Constructor Types => 1) default constructor, 2) parameterized constructor & 3) copy constructor.
// # copy constructor :-
// 1] When we pass object of same class as a parameter to it's constructor, we called that constructor a copy constructor.
// 2] In copy constructor, you have to catch that parameter by reference only, otherwise compiler generates error.
// example :-

#include<iostream>
using namespace std;
class Num
{

	public:
		int x,y;
		
		Num()	//default constructor
		{
			cout<<"\nIn default constructor.";
		}
		
		Num(int a,int b)	// parameterized constructor
		{
			cout<<"\nIn 2 parameterized constructor.";
			x = a;
			y = b;
		}
		
		Num(Num & Temp)		//copy constructor, catch parameter(object) by reference only
		{
			cout<<"\nIn copy constructor.";
			x = Temp.x;
			y = Temp.y;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;		//default constructor will be called
	Num var(3,5);	//2 parameterized constructor will be called
	Num T(var);		//copy constructor will be called.
	
	obj.show();		//garbage garbage
	var.show();		//3       5
	T.show();		//3       5
	return 0;
}
