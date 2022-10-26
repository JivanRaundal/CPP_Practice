//		POLYMORPHISM
// Note - We cannot store address of one class into the pointer variable of another class normally, But this is valid
//        in case of Inheritance. 
//        Parent class pointer variable can store address of object of it's own class and it can also store address of
//        object of all those classes which are derived from that parent class. But, vice a versa is not possible. 
// Note - consider the following diagram,
//		  		A
//				|	In this diagram, pointer variable of class A can store address of objects of class A,B,C,D,E (ALL).
//           ---B	Similarly, C * ptr;	can store address of objects of class C & D.
//			 |	| 	Note - But, vice a versa is not possible. i.e. D * ptr; cannot store address of object of class C.
//			 E  C
//				|
//				D

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
		void print()
		{
			cout<<"\nIn child print()";
		}
};

int main()
{
	parent pobj;
	child  cvar;
	parent * ptr;
	
	ptr = &pobj;	//valid
	ptr->show();	
	
	ptr = &cvar;	//valid due to onheritance
	//ptr->print();	//this statement will give error bcz parent has no member print() as parent class members are 
					// bind to type of object at comiple time only & ptr = &cvar; this assgn is done at runtime
					// Or at execution time
	return 0;
}
