// 				CLASS AND OBJECT
// Generalized way to use class and object.
// Generalized code means one seperate function for each task.
// Q. calculator

#include<iostream>
using namespace std;

class calc
{
	int x, y;
	public:
		void scan()
		{
			cout<<"\nEnter x and y : ";
			cin>>x>>y;	
		}
		void add()
		{
			cout<<"\nAddition : "<<x+y;	
		}
		void sub()
		{
			cout<<"\nSubstraction : "<<x-y;
		}
};

int main()
{
	calc T;
	T.scan();
	T.add();
	T.sub();
	return 0;
}
