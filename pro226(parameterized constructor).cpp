//					CONSTRUCTORS
// Note - Constructor Types => 1) default constructor, 2) parameterized constructor & 3) copy constructor.
// # parameterized constructor :-
// 1] Constructor with some parameters is called as parameterized constructor.
// 2] we have to pass parameters to object in parameterized constructor.
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
		
		Num(int p)		// parameterized constructor
		{
			cout<<"\nIn 1 parameterized constructor.";
			x = p;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;	//default constructor will be called
	Num var(3,5);	//2 parameterized constructor will be called
	Num Temp(4);	//1 parameterized constructor will be called
	
	obj.show();		// garbage  garbage
	var.show();		// 3 	    5
	Temp.show();	// 4        garbage
	return 0;
}
