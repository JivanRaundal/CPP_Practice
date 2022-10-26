//						CONSTRUCTOR
// Q. Can we call constructor's explicitly..? => YES
// Note - When you call constructors explicitly, object get's created automatically for the corresponding constructor.
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
		
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	// Calling Constructors explicitly.
	Num();	//default constructor will get called & object for default constructor will get created automatically.
	Num().show();
	
	(Num(3,5)).show();	// due to Num(3,5) parameterozed constructor will be called & due to (Num(3,5)).show()
						// show() function will be called for the object created by parameterized constructor.
						
	return 0;
}
		
