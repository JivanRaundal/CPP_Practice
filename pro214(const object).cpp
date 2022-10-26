//						CLASS & OBJECT
// CONSTANT OBJECT:-
// Note - Constatnt object must be initialized at the time of declaration. Otherwise, compiler generates error.
//        constant object can call only constant member function.
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void set()
		{
			x = 5;
			y = 0;
		}
		
		void change(Number & T) const	//const member function
		{
			/* calling obbject becomes constant object inside const member function. So, datamembers of calling
			   object cannot be changed. */
			//x = x + 1;	//error - cannot change datamember of calling object as it becomes constant.
			T.x = x + 3;	//you can access them but can't change them.
			T.y = y + 1;
		}
		
		void display()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number var;	//normal object
	
	const Number obj = {10,20};	//const object
	/*constant object must be initialized at the time of declartion.
	  As datamembers of class gets continuous memory like array elements. Hence the initialization
	  const Number obj = {10,20}; is valid. */
	  
	//obj.display();	//error bcz const object can call const member function only. 
	obj.change(var);	//No error bcz change() is constant member function
	var.display();
	return 0;
}
