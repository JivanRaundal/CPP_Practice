// 					CLASS & OBJECT
// POINTER TO OBJECT:-
// Note - pointer only stores address.
// 1] Address of object & class's first datamember is same. But their datatype is different.
// Note - CPP gives two operators to access members of object.
//	1) .(dot) operator:- 
//						syntax = simple_object . member_of_object;
//								  (left side)     (right side)
//   					eg - var.x;

// 2) ->(arrow) operator:- 
//						syntax = pointer_to_object -> member_of_object;
//  							  (left side)          (right side)
//						eg - let q be pointer to object var, such that   q = &var;
//                            q->x;	//same as var.x; bcz q stores address of x only.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	Number obj,var;
	
	Number * q;	//pointer to object
	q = &var;	//q is storing address of var
	
	q->x = 90;	//same as var.x = 90;
	q->y = 35;
	
	q = &obj;	//q is now storing address of obj
	
	q->x = 120;	//same as obj.x = 120;
	q->y = 95;
	
	cout<<"\nvar.x = "<<var.x<<"\tvar.y = "<<var.y;
	cout<<"\nobj.x = "<<obj.x<<"\tobj.y = "<<obj.y;
	return 0;
}
