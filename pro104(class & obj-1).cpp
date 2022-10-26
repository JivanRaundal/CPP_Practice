// 						CLASS AND OBJECT
// 1] Class - It is user-defined datatype.
// 2] Object - variable of class or variable of user defined datatype.
// 3] we can defined variables i.e. (Data members) & functions (Member functions) inside the class.
// 4] Datamember :- Variables declared inside the class. But, outside any member function are called datamembers of class.
// 5] Member Functions:- Functions declared or defined inside the class are called member function of class.
// 6] Two ways to defined member functions:-
//			A] Outside the class:- for defining outside the class follow given rules
//			   1) Declare the functions prototype inside the class.
//			   2) At the function definition mentioned classname and :: operator before functions name in fun header.
//					STNTAX:-  returntype_of_fun class_name:: function_name()
//                  classname and :: operator together are called as Membership Identity Label.
//          B] Inside the class:-
//			   -While defining fun inside the class we do not need to mentioned prototype or Membership Identity Label.
//			   -Member functions defined inside the class become Inline Automatically.
// 7] NOTE:- Every programs execution always starts from main() fun. So, main() fun cannot be member fnction of any class.

#include<iostream>
using namespace std;

class Number
{
	public:	//access specifier
		int x,y;	//datamembers
		void show()	//member function
		{
			cout<<"\n\nx = "<<x<<"\ty = "<<y;	//object name is not required to access datamembers of class bcz they are
											//directly accessible in member functions of their own class.
		}
};

int main()
{
	Number var, obj;	//objects/variables of class Number
	var.x = 10;	//object name is required to access nonstatic datamamber of class in non-member function.
	var.y = 20;
	obj.x = 5;
	obj.y = 7;
	
	cout<<"\nvar.x = "<<var.x<<"\tvar.y = "<<var.y;	// var.x & var.y will print x & y of var 
	cout<<"\nobj.x = "<<obj.x<<"\tobj.y = "<<obj.y; // obj.x & obj.y will print x & y of obj
	
	//object name is required to call nonstatic member function (show()) of the class Number.
	var.show();	//show() will work for var
	obj.show();	//show() will work for obj
	return 0;
}
