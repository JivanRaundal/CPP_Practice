// 						CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER BY REFERENCE
// example:-
// creating refernce to object of class is same as that of creating reference to normal variables.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		int y;
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj;
	obj.x = 10;
	obj.y = 20;
	
	Num & T = obj;	//T is refernce variable(object) of obj.
	cout<<"\nx = "<<T.x<<"\ty = "<<T.y;
	T.x = 90;	//all the changes made in T will be reflected in obj also.
	cout<<"\nx = "<<obj.x<<"\ty = "<<obj.y;
	return 0;
}

