//					CLASS & OBJECT
// COMPOSITION:-
// Note - You cannot declare/create object of class as it's own datamember, compiler don't have its complete definition.
// 1] You can create object of one class as a datamember in another class. But, that class's definition must be known 
//    to compiler. This concept is known as COMPOSITION.
// example:-

#include<iostream>
using namespace std;

class Digit
{
	public:
		int x,y;
};

class Number
{
	public:
		Digit D;	// COMPOSITION
		
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>D.x>>D.y;
		}
		void print()
		{
			cout<<"\nx = "<<D.x<<"\ty = "<<D.y;
		}
};

int main()
{
	Number obj,var;
	
	obj.scan();
	obj.print();
	var.scan();
	var.print();
	
	// To access Number datamember D in main()
	cout<<"\nx = "<<obj.D.x;
	cout<<"\ty = "<<obj.D.y;
	return 0;
}
