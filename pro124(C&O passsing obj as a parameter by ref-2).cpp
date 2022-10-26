// 				CLASS AND OBJECT
// PASSING OBJECT AS A PARAMETER BY REFERENCE
// exapmle of pass by value to understand difference.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x, y;
		void scan(Num var)
		{
			cout<<"\nEnter the x and y for obj : ";
			cin>>x>>y;	//scan() is working for obj, x and y of obj are directly accessible in scan()
			
			cout<<"\nEnter the x and y for var : ";
			cin>>var.x>>var.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj, T;
	
	obj.scan(T);	//T is passed by value to scan() so changes made in scan() will not reflect in T.
	obj.show();
	T.show();  //this will print garbage value bcz in show() x and y are stored in var and not in T bcz of pass by value
	return 0;
}
