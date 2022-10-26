//			RUNTIME POLYMORPHISM
// # Runtime polymorphism :- In runtime polymorphism, function call decisions will be made at runtime depending upon
//                           content of pointer & not the datatype of pointer.
// # For runtime polymorphism we need 4 things :-
// 1] Inheritance.
// 2] Function Overriding :-
//   -When we say two functions are overriden, it means their header is same (i.e. same returntype, same name, 
//    same para list). Hence, overriden functions must be in different classes, you cannot Implement overriding in
//    one class.
//    Note - Inheritance between these two classes is necessary.
// 3] Virtual Functions :-
//    -The base class copy of overriden function must be virtual. (the topmost base class copy)
// 4] Base class pointer is necessary.
// Note :- Runtime polymorphism is possible only if we satisfy above 4 requirements in our code.
// explanation :- In folln eg, parent class show() get's called at statement1. Bcz, ptr contains address of object of
//                class parent & function call decision is made depending upon content of ptr. Bcz, we have implemented
//                runtime polymorphism. Same case happens with statement2 as ptr now stores address of object of class
// 				  child. child class show() get's called at statement2.
// example :-

#include<iostream>
using namespace std;

class parent
{
	public:
		virtual void show()		//virtual function,	Note - void virtual show(){ } is also valid
		{
			cout<<"\nIn parent show()";
		}
};

class child : public parent		//inheritance
{
	public:
		void show()		//overriden function
		{
			cout<<"\nIn child show()";
		}
};

int main()
{
	parent pobj;
	child  cvar;
	parent * ptr;	//pointer to base class parent
	
	ptr = &pobj;
	ptr -> show();		//parent show() will called	----(1)
	
	ptr = &cvar;
	ptr -> show();		//child show() will called	----(2)
	return 0;
}
