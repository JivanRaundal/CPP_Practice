// 					Inheritance
// # Constructors & Destructors in Inheritance :-
// Theory :-
// 1] In case of Inheritance, constructors get executed according to heirarchy of Inheritance.
// 2] eg - Suppose we have following Inheritance heirarchy,  Grand ---> parent ----> child
//    then, constructor for Grand executes first, then for parent & then for child when object of child is created.
// 3] Destructors always get executed in the Reverse order of constructor. Hence, for above example, destructor for child executes
//    first, then for parent & then for Grand.
// example :-

#include<iostream>
using namespace std;

class Grand
{
	public:
		Grand()
		{
			cout<<"\nIn Grand default constructor";
		}
		~Grand()
		{
			cout<<"\nIn Grand destructor";
		}
};

class parent : public Grand
{
	public:
		parent()
		{
			cout<<"\nIn parent default constructor";
		}
		~parent()
		{
			cout<<"\nIn parent destructor";
		}
};

class child : public parent
{
	public:
		child()
		{
			cout<<"\nIn child default constructor";
		}
		~child()
		{
			cout<<"\nIn child destructor";
		}
};

int main()
{
	child obj;
	return 0;
}
