//			INHERITANCE
// # Parameterized Constructor In Inheritance :-
// Note -  Whenever we create object of child, constructor for parent gets executed first.
//         Even if we call parameterized constructor for child, default constructor of parent gets executed.
// Q. Then How to call parameterized constructor of parent class....?? ( solution in next code)

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
		child(int a,int b,int c)
		{
			cout<<"\nIn child parameterized constructor";
		}
};

int main()
{
	child obj;
	cout<<endl;
	child var(2,3,5);
	return 0;
}
