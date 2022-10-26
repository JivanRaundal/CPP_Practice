//				CLASS AND OBJECT
// example - object is mentioned explicitly to access nonstatic members of class in non-member functions of class.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		void show()
		{
			cout<<"\nx = "<<x;
		}
};

void myfun()
{
	Num T;
	T.x = 90;
	T.show();
}

int main()
{
	Num obj;
	obj.x = 10;
	obj.show();
	Num var;
	var.x = 20;
	var.show();
	var.x = 20;
	
	myfun();
	return 0;
}
