// Inheritance
// # accessing protected members :-
// eg 1)-

#include<iostream>
using namespace std;

class parent
{
	protected:
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
			x = 10;		//valid
			show();		//here, show() will also work for calling object of myfun()
		}
};

int main()
{
	child obj;
	//obj.x = 10;	//error, bcz member become protected inside the child class
	//obj.show();
	obj.myfun();
	return 0;
}
