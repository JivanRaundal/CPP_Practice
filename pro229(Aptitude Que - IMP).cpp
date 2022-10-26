//				CONSTRUCTOR
// Q. Imp Question for Aptitude Of Companies.
//    question is to predict the following code's output.

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
		
		Num(int p)		// parameterized constructor
		{
			cout<<"\nIn 1 parameterized constructor.";
			x = p;
		}
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj(2,3);	
	Num Temp();		// function declaration, not object of class Num
	Num var(5);
	
	return 0;
}

/* OUTPUT :-
	In 2 parameterized constructor.
	In 1 parameterized constructor.
*/
/* REASON :-
	Because at line no-40, 'Num Temp();' is function declaration, & not an object of class Num
	eg - It could be this type of function - 
		Num Temp()
		{
			Num T;
			return T;
		}
*/
