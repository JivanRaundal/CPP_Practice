//						CONSTRUCTOR
// How to access private constructors...?
// Q. If all the constructors of class is private, then how can we access that class..?
// Answer=> There are 2 options :-
//	 		1] Make any Independent Function a Friend of your class. So that, your private constructor's will get
//			   called from your function & you can create object of your class.
//			2] When your constructor is private, we can use static member function.
//			   - Define one static member function in class & create object's of class in that static member function.				 
// example-2)

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
		
		Num()
		{
			cout<<"\nIn default constructor.";
			x = 0;
			y = 0;
		}
		
		Num(int a,int b)
		{
			cout<<"\nIn 2 parameterized constructor.";
			x = a;
			y = b;
		}
		
	public:
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		static void myfun()	//static member function
		{
			Num obj;	//default const will called
			obj.show();	// 0 0
			Num var(3,5);	//parameterized const will called
			var.show();		// 3 5
		}		
};

int main()
{
	Num::myfun();
	return 0;
}
		
