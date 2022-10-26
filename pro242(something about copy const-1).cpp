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
		Num(Num & T)
		{
			cout<<"\nIn copy constructor.";
			x = 90;
			y = 100;
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
	var = obj;		//Overloaded Assignment Operator
	var.show();		// 5 6
	
	/* Note - (hindi) agar at the time of object creation var ko obj assgn hoga(i.e. Num var = obj) toh var keliye
			  copy constructor (written by user (hoga toh)) Or Implicit copy(agar user ka copy constructor nhi hai toh)
			  constructor execute hoga OR agar object  pehle create ho gaya (Num var;)
			  and then next line me assignment kiya (i.e. var = obj) then Overladed Assignment Operator. */
	return 0;
}
