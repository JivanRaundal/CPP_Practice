//	EXCEPTION HANDLING
// # user-defined exceptions :-
// Note - here we are throwing object OR constructor (even if we don't defined constructors explicitly)
// eg-

#include<iostream>
using namespace std;

class Myexception
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
	catch(Myexception e)			//catching exception of user-defined type here
	{
		e.show_msg();
		e.handler();
	}
	cout<<"\nAt the end";
	
	return 0;
}
