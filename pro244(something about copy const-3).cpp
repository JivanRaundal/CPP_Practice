//				CONSTRUCTORS
// SOMETHING ABOUT COPY CONSTRUCTOR :-
// Note - Constructor get's executed only at the time of object creation.
// example:-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		Num()
		{
			cout<<"\nIn default constructor.";
			x = 0;
			y = 0;
		}
		Num(int a,int b)
		{
			cout<<"\nIn parameterized constructor.";
			x = a;
			y = b;
		}
		Num(Num & T)	//copy constructor
		{
			cout<<"\nIn copy constructor.";
			x = 70;
			y = 80;
		}
		void change(Num Temp)	//Note- here, obj gets assgn to Temp from function call in line-46(i.e.Num Temp = obj), 
		{						//		  So, copy constructor will get called here for Temp & T becomes reference 
			x = Temp.x;			//        of obj in copy constructor.
			y = Temp.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj(5,6);	//parameterized constructor will be called
	Num var;		//default constructor will be called
	var.change(obj);	//copy constructor will be called (explanation at line-31)
	var.show();		// 70 80

	return 0;
}
/* Note - For better understanding plz refer to notebook. */
