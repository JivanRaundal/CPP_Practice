// 				CLASS AND OBJECT
// NOTE:- When you want to access members (datamember and member fun) of class from your function.
// 1] Is your function member fun or non-member fun ??
// 2] Is that member of class accessible from your function ?? - (access specifier)
// 3] If accessible, how to access that member ?? (Do we need object to access that member ?) - (static/non-static)
// 4] To access members of class in non-member function, you need object and (.) operator.

// Think i following way-->

#include<iostream>
using namespace std;

class Number
{
	private:	//private members are accessible only in member functions
		int x, y;	//non-static datamembers
	public:		//public members are accessible from member fun as well as non-member fun also.
		int z;	//non-static datamember
		
		void show()	//non-static member function
		{
			cout<<"\nHello World";
		}
};

int main()	//non-member function of cass Number
{
	//is x & y are accessible in main()?? NOOO, bcz private
	// z is accessible in main fun bcz of public.
	//Do we need object to access? - YES, bcz z is non-static
	Number obj, var;	//objects/variables of class NUmber
	obj.z = 10;
	var.z = 20;
	cout<<"\nobj.z = "<<obj.z;
	cout<<"\nvar.z = "<<var.z;
	
	//I want access show() from main().
	//Show() is accessible from main() as it is public.
	//show() needs object to get called bcz it is non-static member function.
	obj.show();
	//show() is working for obj. It means, members of obj are directly accessible from show().
	//Directly means without object and (.) operator
	return 0;
}
