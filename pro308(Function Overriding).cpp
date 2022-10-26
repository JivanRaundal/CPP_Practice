//			RUNTIME POLYMORPHISM
// # Function Overriding :-
//   -When we say two functions are overriden, it means their header is same (i.e. same returntype, same name, 
//    same para list). Hence, overriden functions must be in different classes, you cannot Implement overriding in
//    one class.
// Note - Inheritance between these two classes is necessary.
// example :- Here, show() function is overriden.

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
			cout<<"\nIn child show()";
		}
};

int main()
{
	child obj;
	obj.show();
	obj.parent::show();
	return 0;
}
