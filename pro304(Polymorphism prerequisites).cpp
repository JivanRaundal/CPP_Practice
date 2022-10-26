//		POLYMORPHISM
// Note - We cannot store address of one class into the pointer variable of another class normally, But this is valid
//        in case of Inheritance. 
//        Parent class pointer variable can store address of object of it's own class and it can also store address of
//        object of all those classes which are derived from that parent class. But, vice a versa is not possible. 
// example -

#include<iostream>
using namespace std;

class parent
{
	public:
		void show()
		{
			cout<<"\nIn parent show()";
		}
};

class child
{
	public:
		void print()
		{
			cout<<"\nIn child print()";
		}
};

int main()
{
	parent pobj;
	child  cvar;
	parent * ptr;
	
	ptr = &pobj;	//valid
	ptr->show();	
	
	ptr = &cvar;	//error, cannot assgn addr of object of child class to pointer variable of parent class
	
	return 0;
}
