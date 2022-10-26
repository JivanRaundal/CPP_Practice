// Inheritance
// # accessing using private & public :-
// eg-1)

#include<iostream>
using namespace std;

class parent
{
	private:
		int x;
	public:
		void show()
		{
			x = 10;
			cout<<"\nx = "<<x;
		}
};

class child : public parent
{
	public:
		void myfun()
		{
			// Note - private membera are not inherited in child class
			//x = 10; error
			show();		//here, show() will also work for calling object of myfun()
		}
};

int main()
{
	child obj;
	//obj.x = 10;	//error, bcz private members are not inherited
	obj.show();
	obj.myfun();
	return 0;
}
