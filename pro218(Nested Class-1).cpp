//						CLASS & OBJECT
// INNER CLASSES / NESTED CLASSES :-
// Note - If you want to reach to Inner Class, you have to go through Outer Class.
//        We can have multiple nested classes.

#include<iostream>
using namespace std;

class Outer			//outer class
{
	public:
		int x;
		
		class Inner		//Inner class
		{
			public:
				int y;
				void show()
				{
					cout<<"\nIn Inner Show(), y = "<<y;
				}
		};
		
		Inner var;	//composition
};

int main()
{
	Outer obj;
	
	obj.x = 10;
	obj.var.y = 20;	//If you want to reach to Inner Class, you have to go through Outer Class.
	cout<<"\nx = "<<obj.x;
	cout<<"\ny = "<<obj.var.y;	//OR obj.var.show();
	
	//Q. How to create object of Inner Class in Independent function like main().
	// Solution = If you want to reach to Inner Class, you have to go through Outer Class.
	Outer::Inner Temp;	//Temp is object of class Inner.
	Temp.y = 5;
	Temp.show();
	
	
	return 0;
}
