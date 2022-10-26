//				CONSTRUCTOR
// Note - default arguments + function overloading
// Another Ambuiguity error - 
// Note(solution) - 1) If error is due to datatype - use explicit typecasting.
//        			2) If error is due to number of parameters - i) remove default argument OR ii) remove one function.
// Same concept as of previous code (pro230) is applicable for constructors also.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		Num()
		{
			x = 0;
			y = 0;
			cout<<"\nIn default constructor.";
		}
		Num(int a)		//----(1)
		{
			x = a;
			cout<<"\nIn 1 parameterized constructor.";
		}
		Num(int a,int b = 5)	//parameterized constructor with default parameter		----(2)
		{
			x = a;
			y = b;
			cout<<"\nIn 2 parameterized constructor.";
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;	//default constructor will be called
	Num var(2,3);	//2 parameterized constructor will be called
	var.show();		// 2 3
	//Num Temp(4);	//for this object, compiler will find 2 matches & will give Ambuiguous error
	//Temp.show();
	/* Solution - 1) Remove default argument fron 2 parameterized constructor OR
			      2) Remove 1 parameterized constructor from class. */
	
	return 0;
}
