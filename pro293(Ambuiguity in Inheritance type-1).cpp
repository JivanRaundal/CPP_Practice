//				Inheritance
// Ambuiguity Resolution In Inheritance Type1 :-
// Note - If parent & child class has member functions with same name, then although child inherits that member function from parent
//        while calling, priority will be given to child class's member function.
//        But, if we want to access parent class's member function, then we have to use Membership Identity Label
//        So, no Ambuiguity error in this case but priority is given to child's class member function.
// example :-

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
			//show();			//recursively call itself but not parent show()
			//parent::show();	//will call parent show()
		}
};

int main()
{
	child obj;
	obj.show();		//here, priority will be given to child show()
	// to access parent show(), we have to use Membership Identity Label
	obj.parent::show();		//parent show() will called
	//obj.child::show(); 	//is also valid
	return 0;
}
