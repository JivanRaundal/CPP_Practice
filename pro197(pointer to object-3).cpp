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
	private:
		int x,y;
	public:
		void scan()
		{
			cout<<"\n\nEnter x & y : ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number obj,var;
	
	Number * q;	//pointer to object
	
	q = &var;	//q stores address of var first
	cout<<"\n1) q = "<<(long long)q;
	q->scan();	//q stores address of var so, scan() will work for var
	q->print();
	
	q = &obj;	//q now stores address of obj
	cout<<"\n\n2) q = "<<(long long)q;
	q->scan();	//q stores address of obj so, scan() will work for obj
	q->print();
	
	return 0;
}
