//	EXCEPTION HANDLING
// # user-defined exceptions :-
// Here, we are using Inheritance concept
// Note - We have seen in runtime polymorphism that base class pointer can store address of object of it's own class
//		  as well as it can store address of object's of child class also. Same case is with normal objects also.
// Note - here we are throwing object OR constructor (even if we don't defined constructors explicitly)
// eg-

#include<iostream>
using namespace std;

class parent
{
	public:
		parent()
		{
			cout<<"\nIn parent constructor";
		}
};

class Myexception : public parent
{
	public:
		int error_code;
		Myexception(int x)	//parameterized constructor
		{
			error_code = x;
		}
		void show_msg()
		{
			cout<<"\nException of Myexception is generated";
		}
		void handler()
		{
			if(error_code == 10)
			{
				cout<<"\nBig error";
			}
			else if(error_code == 15)
			{
				cout<<"\nVery Big error";
			}
		}
};

int main()
{
	int x;
	cout<<"\nEnter value : ";
	cin>>x;
	
	try
	{
		if(x==10 || x==15)
		{
			throw Myexception(x);	//throwing constructor (which implicitly generates object) & throws object
		}
		cout<<"\nCorrect Input...No error";
	}
	catch(parent e)			//here object in parameter is of base class parent
	{
		//e.show_msg();		//error, bcz this binding is done at compile time depending on datatype of e
		//e.handler();
	}
	cout<<"\nAt the end";
	
	return 0;
}
