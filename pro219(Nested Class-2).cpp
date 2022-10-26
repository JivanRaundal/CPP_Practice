//						CLASS & OBJECT
// INNER CLASSES / NESTED CLASSES :-
// Note1 - If you want to reach to Inner Class, you have to go through Outer Class.
//        We can have multiple nested classes.
// Note2 - What if Inner class is declared under private access specifier of class Outer.
//      -> Due to private, We cannot create object of class Inner in Independent / non-member function.
//        But we, can create it's object inside the outer class as a datamember (composition).
//      - About Inner Class's Member's -> To access members, only access specifier of members plays an important role.
//        Although, Inner class is under private access-specifier, If member's access-specifier is public, they
//        are accessible everywhere. 

#include<iostream>
using namespace std;

class Outer			//outer class
{
	private:	//----(1)
		class Inner		//Inner class
		{
			public:			//----(2)
				int y;
				void show()
				{
					cout<<"\nIn Inner Show(), y = "<<y;
				}
		};
		
	public:				//----(3)
		Inner var;	//composition
		int x;
};

int main()
{
	Outer obj;
	
	obj.x = 10;
	obj.var.y = 20;		//Inner class's member y is accessible here bcz it's access-specifier is public.
	
	cout<<"\nx = "<<obj.x;
	obj.var.show();
	
	//Outer::Inner Temp;	//error, we cannot create object of class Inner in independent fun bcz it is private.
	return 0;
}
