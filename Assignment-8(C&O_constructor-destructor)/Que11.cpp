// Q 11]. WAP to access your class when all of its constructors are private.
// Note - There are 2 ways to access class when all of its constructors are private - 
//        1) make Independent function as a friend of class where you want to create object of your class.
//		  2) use static member function to access class when its constructors are private.

#include<iostream>
using namespace std;

class Num
{
	private:
		int x,y;
		Num()
		{
			x = 0;
			y = 0;
			cout<<"\nIn default constructor";
		}
		Num(int a,int b)
		{
			x = a;
			y = b;
			cout<<"\nIn parameterized constructor";
		}
		
	public:
		void print()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
		
		static void myfun()		//2nd method to access class whose constructors are private
		{
			cout<<"\n";
			Num T1;
			Num T2(10,20);
			T2.print(); 
		}
		
		friend int main();	//1st method to access class whose constructors are private
};

int main()
{
	Num obj;
	Num var(5,6);
	var.print();
	
	Num::myfun();
	return 0;
}
