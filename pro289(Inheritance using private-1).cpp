// Inheritance
// # accessing using private :-
// eg 1)-

#include<iostream>
using namespace std;

class parent
{
	public:
		int x;
		void show()
		{
			cout<<"\nx = "<<x;
		}
};

class child : private parent
{
	public:
		void myfun()
		{
			// Note - private membera are only accessible from member function
			x = 10;
			show();		//here, show() will also work for calling object of myfun()
		}
};

int main()
{
	child obj;
	//obj.x = 10;	//error, bcz members becomes private inside the child class
	//obj.show();
	obj.myfun();
	return 0;
}
