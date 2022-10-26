//							Inheritance
// Note - In any class only protected & public members are ready for Inheritance. Private members never get inherited.
// # Inheriting parent class using public access-specifier :-
// => When we Inherit parent class using public access-specifier of child class, the access-specifiers of members coming from
//    parent class does not change in child class. Hence, protected members of parent becomes protected members of child class
//    & public members of parent become public members of child class.
// eg-

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

class child : public parent
{
	public:
		void myfun()
		{
			//proteced members will be accessible only in member function of child class & parent clss & not in independent fun
			y = 10;
			cout<<"\nIn myfun(), y = "<<y;
		}
};

int main()
{
	child obj;
	//obj.x = 54;	//error, private members are not inherited
	//obj.show();	//error
	//obj.y = 22;		//error, protected members are inherited but not accessible in non-member functions
	//obj.disp();		//error
	obj.z = 22;
	cout<<"\nz = "<<obj.z;
	obj.print();
	obj.myfun();
	return 0;
}
