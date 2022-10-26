// 		Inheritance
// # Q. How to call parameterized constructors in case of multiple Inheritance....?
// Note - While passing parameters to constructors in case of multiple inheritance, constructors for parent classes
//        get executed in the order of Inheritance, No matter in which sequence you have mentioned them at child class
//        constructors.
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
		parent1(int a)
		{
			cout<<"\nIn parent1 parameterized constructor";
		}
};

class parent2
{
	public:
		parent2()
		{
			cout<<"\nIn parent2 default constructor";
		}
		parent2(int a)
		{
			cout<<"\nIn parent2 parameterized constructor";
		}
};

class child : public parent1, public parent2	//sequence of inheritance (parent1->parent2->child)
{
	public:
		child()
		{
			cout<<"\nIn child default constructor";
		}
		child(int a,int b,int c) : parent2(10), parent1(a)	//no matter sequence here, para const of parent will be 
		{													//called in sequence of inheritance only.
			cout<<"\nIn child parameterized constructor";
		}
};

int main()
{
	child obj(2,3,5);
	return 0;
}
