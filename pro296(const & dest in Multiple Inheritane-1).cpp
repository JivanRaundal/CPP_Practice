//			INHERITANCE
//	# Constructors & Destructors in Multiple Inheritanec :-
// Note - In Multiple Inheritance, Constructors for parent classes get executed in the sequence of their Inheritance.
// eg-

#include<iostream>
using namespace std;

class parent1
{
	public:
		parent1()
		{
			cout<<"\nIn parent1 default constructor";
		}
};

class parent2
{
	public:
		parent2()
		{
			cout<<"\nIn parent2 default constructor";
		}
};

class child : public parent2, public parent1	//constructor execution order = parent2->parent1->child
{
	public:
		child()
		{
			cout<<"\nIn child default constructor";
		}
};

int main()
{
	child obj;
}
