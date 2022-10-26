//			CONSTRUCTOR
// Defining Contructor Outside the Class :-
// Note - we can define constructor of class outside the class using Membership Identity Label.
// Syntax - (No returntype for constructors) => syntax:- ' class_name::class_name() '
// example :-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		Num();		//default constructor declaration
		Num(int, int);	//2 parameterized constructor declaration
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

Num::Num()
{
	x = 0;
	y = 0;
	cout<<"\nIn default constructor.";
}

Num::Num(int a,int b)
{
	x = a;
	y = b;
	cout<<"\nIn 2 parameterized constructor.";
}

int main()
{
	Num obj;
	obj.show();
	
	Num var(2,3);
	var.show();
	
	return 0;
}
