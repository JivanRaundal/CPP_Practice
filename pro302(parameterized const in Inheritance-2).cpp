//			INHERITANCE
// # Parameterized Constructor In Inheritance :-
// Note -  Whenever we create object of child, constructor for parent gets executed first.
//         Even if we call parameterized constructor for child, default constructor of parent gets executed.
// Q. Then How to call parameterized constructor of parent class....?? ( solution is in code)
// Note - What can be passed :- 1) directly a value
//                              2) a variable from formal parameter list of child constructor
// (Plz, refer to notebook notes for better understanding)

#include<iostream>
using namespace std;

class parent
{
	public:
		parent()
		{
			cout<<"\nIn parent default constructor";	
		}
		parent(int a)
		{
			cout<<"\nIn parent parameterized constructor";
		}
};

class child : public parent
{
	public:
		child()
		{
			cout<<"\nIn child default constructor";	
		}
		child(int a,int b,int c) : parent(10)		// OR parent(a/b/c) i.e parameter can be a,b or c
		{
			cout<<"\nIn child parameterized constructor";
		}
};

int main()
{
	child obj;
	cout<<endl;
	child var(2,3,5);	// Now, whenever parameterized const of child executes, parameterized const for parent will 
						// also execute.
	return 0;
}
