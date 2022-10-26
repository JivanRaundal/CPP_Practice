//					CONSTRUCTORS
// Note - In following case also copy constructor will be called.


#include<iostream>
using namespace std;
class Num
{

	public:
		int x,y;
		
		Num()	//default constructor
		{
			cout<<"\nIn default constructor.";
		}
		
		Num(int a,int b)	// parameterized constructor
		{
			cout<<"\nIn 2 parameterized constructor.";
			x = a;
			y = b;
		}
		
		/* Note - If we commented copy constructor, then also 'Num T = var;' at line 44 will work due to
		   Overloaded Assignment Operator. */
		Num(Num & Temp)		//copy constructor, catch parameter(object) by reference only
		{
			cout<<"\nIn copy constructor.";
			x = Temp.x;
			y = Temp.y;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;		//default constructor will be called
	Num var(3,5);	//2 parameterized constructor will be called
	Num T = var;		//copy constructor will be called if available & if not, Overloaded Assignmrnt Operator.
	// contents of var will get copy in T. If copy constructor is available then - Num T(var); & if not available
	// simply, Num T = var; will be considered due to Overloaded Assignment Operator.
	// Means, priority will be given to copy constructor if present & not to Overloaded Assignment Operator.
	
	obj.show();		//garbage garbage
	var.show();		//3       5
	T.show();		//3       5
	return 0;
}
