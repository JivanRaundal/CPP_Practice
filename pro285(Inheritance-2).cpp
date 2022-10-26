//							Inheritance
// Note - In any class only protected & public members are ready for Inheritance. Private members never get inherited.
// # Inheriting parent class using protected access-specifier :-
// => When we Inherit parent class using protected access-specifier of child class, all the members coming from parent class
//    becomes protected members of child class.

#include<iostream>
using namespace std;

class parent
{
	private:
		int x;
		void show()
		{
			cout<<"\nIn show()";
		}
	protected:
		int y;
		void disp()
		{
			cout<<"\nIn disp()";
		}
	public:
		int z;
		void print()
		{
			cout<<"\nIn print()";
		}
};

class child : protected parent
{
	public:
		void myfun()
		{
			//proteced members will be accessible only in member function of child class & parent clss & not in independent fun
			y = 10;
			z = 20;
			cout<<"\nIn myfun(), y = "<<y<<"\tz = "<<z;
		}
};

int main()
{
	child obj;
	//obj.x = 54;	//error, private members are not inherited
	//obj.show();	//error
	//obj.y = 22;		//error, protected members are inherited but not accessible in non-member functions
	//obj.disp();		//error
	//obj.z = 22;			//error, bcz z becomes protected member of child class & hence not accessible in main()
	//cout<<"\nz = "<<obj.z;
	//obj.print();			//error, print() becomes protected in child class
	obj.myfun();
	return 0;
}
