//			RUNTIME POLYMORPHISM
// # Pure Virtual Function :- (Abstract classes)
// 1] Syntax =>   virtual return_type fun_name(para_list) = 0;  eg- virtual void show() = 0;
// 2] Pure virtual function has no definition.
// 3] Classes containing pure virtual functions are called Abstract classes.
// 4] We cannot create object of Abstract class.
// 5] Abstract class may contain Normal member functions & constructors also. Still, we can't create it's object.
//   [Note - But, we can Inherit members of Abstract class & use them.]
// 6] Abstract classes are used only for Inheritance to apply the Compultion on derived classes.
// 7] The derived class which Inherits the Abstract class has to has to Override the Pure Virtual Function from
//    Abstract class. If child/derived class does not override pure virtual function from it's Abstract base class,
//    It also becomes an Abstract class & can use it only for further Inheritance, bcz can't create it's object.
// 8] No access-specifier Limitations on Pure Virtual Functions.
// example :-

#include<iostream>
using namespace std;

class parent		//Abstract base class
{
	public:
		
		virtual void show() = 0;	//Pure virtual function
		
		void disp()		//normal member fun
		{
			cout<<"\nIn parent disp()";
		}
};

class child :  public parent
{
	public:
		//overriding (defining) pure virtual function here. If we don't do so, child will also become Abstract class
		void show()		//overriden show() fun
		{
			cout<<"\nIn child show()";
		}
};

int main()
{
	//parent var;		//error, bcz cannot create object of Abstract class
	child obj;
	obj.show();
	obj.disp();
	return 0;
}
 
