//					CONSTRUCTORS
// CONSTRUCTORS FOR RUNTIME OBJECT :-
// example :-

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
			cout<<"\nIn 2 parameterized constructor.";
			x = a;
			y = b;
		}
		
	public:
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;	//default constructor will be called for this compile-time created object
	
	Num * p;	//pointer to object. For this statement no any constructor get's executed. Bcz here we are creating
				//a pointer variable.
	/* NOTE - Constructor get's executed only when we create an object. */
	p = new Num();	//runtime object will be created for this statement & constructor for that object will be called.
	p->show();	//Arrow (->) operator is used with pointer to object.
	
	Num * q = new Num(3,5);
	q->show();
	return 0;
}
