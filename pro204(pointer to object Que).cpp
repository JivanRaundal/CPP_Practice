//			CLASS & OBJECT
// Pointer to Object:-
// Q. use only pointer to object to access members of class Number in folln code.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number obj;
	
	Number * p;	//pointer to object
	p = &obj;	//p stores address of obj
	
	cout<<"\nEnter x & y : ";
	cin>>p->x;
	cin>>p->y;
	p->print();
	
	return 0;
}
