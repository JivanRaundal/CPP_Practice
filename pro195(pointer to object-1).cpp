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
		int x;
		int y;
};

int main()
{
	Number var;
	
	cout<<"\n&var = "<<(long long)&var;	//address of oject & first datamember(x) is same.
	cout<<"\n&var.x = "<<(long long)&var.x;
	cout<<"\n&var.y = "<<(long long)&var.y;
	
	int *p;	//pointer to int
	p = &var.x;
	
	Number *q;	//pointer to object
	q = &var;	//q only stores address of object var nothing else. size of q = 4/8 bytes
	
	q->x = 90;	//accessing datamembe x using pointer to object & ->(arrow) operator.
	/*  Think in following way:-
		q->x; means  1000(value of q), memory location ka(--> arrow op), x(member);
	*/
	cout<<"\nq->x = "<<q->x;	//same as cout<<var.x;
	cout<<"\nvar.x = "<<var.x;
	//cout<<q->var.x;	//error;	Either use pointer or use simply object to access members.
	
	return 0; 
}
