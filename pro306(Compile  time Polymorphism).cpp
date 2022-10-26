//			POLYMORPHISM
// # There are 2 types of polymorphism :-
// 1] Compile-time Polymorphism & 2] Run-time Polymorphism
// 1] Compile-time Polymorphism :- Here, function call decisions are made by the compiler depending upon datatypes &
//                                 not the content. eg- function overloading, templates.
// Note - In following example, there is no any Runtime polymorphism. Hence, at statement1 & statement2 function call
//        decisions are made by compiler depending upon datatype of ptr (pointer var) & not the content of ptr 
//        (i.e not on which class objects addr is stored in ptr). Hence, In both the statements parent class show()
//        get's executed.


#include<iostream>
using namespace std;

class parent
{
	public:
		void show()
		{
			cout<<"\nIn parent show()";
		}
};

class child : public parent
{
	public:
		void show()
		{
			cout<<"\nIn parent show()";
		}
};

int main()
{
	parent pobj;
	child  cvar;
	parent * ptr;
	
	ptr = &pobj;	//valid
	ptr->show();	//----(1)	
	
	ptr = &cvar;	//valid due to onheritance
	ptr->show();	//----(2)
	
	return 0;
}
