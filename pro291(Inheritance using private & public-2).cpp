// Inheritance
// # accessing using private & public :-
// eg-2)
/* In this code their are 4 ways to reach to x as follows :-
	1) obj->print()->x
	2) obj->print()->show()->x
	3) obj->disp()->print()->x
	4) obj->disp()->print()->show()->x
*/


#include<iostream>
using namespace std;

class parent
{
	private:
		int x;
		void show()
		{
			x = 10;
			cout<<"\nx = "<<x;
		}
	public:
		void print()
		{
			//x = 20;	valid, x is accessible here
			show();
		}
};

class child : public parent
{
	public:
		void myfun()
		{
			// Note - private membera are not inherited in child class
			//x = 10; 	error
			//show();	error
			print();	//here print() will work for calling object of myfun().
		}
};

int main()
{
	child obj;
	//obj.x = 10;	//error, bcz private members are not inherited
	//obj.show();	//error
	obj.print();
	obj.myfun();
	return 0;
}
