// Inheritance
// # accessing using public :-
// eg-

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

class child : public parent
{
	
};

int main()
{
	child obj;
	obj.x = 10;
	obj.show();
	return 0;
}
