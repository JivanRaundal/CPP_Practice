//			CLASS & OBJECT
// CONSTANT MEMBER FUNCTION:-
// Note - Calling objects become constant object in const member funcion. So, datamembers of calling object cannot
//        be changed in const member function.
//        We can access them but cannot change them.
// example :-

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
			T.y = x + 1;
		}
		
		void display()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Number var,obj;
	var.set();
	var.display();
	var.change(obj);	//members of var becomes const in change() 
	obj.display();
	return 0;
}
