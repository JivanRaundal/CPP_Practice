// 					CLASS AND OBJECT
// Q. copy obj in var using pass by value and pass by reference.

#include<iostream>
using namespace std;

/* A] by value = fun call - var.copy(obj);
class Num
{
	int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void copy(Num T)	//by value
		{
			x = T.x;
			y = T.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int main()
{
	Num obj,var;
	obj.scan();
	obj.show();
	
	var.copy(obj);	//obj is passed by value
	var.show();
	return 0;
}
*/

// B] by reference = fun call - obj.copy(var);
class Num
{
	int x,y;
	public:
		void scan()
		{
			cout<<"\nEnter x & y : ";
			cin>>x>>y;
		}
		void copy(Num & T)	//by reference
		{
			T.x = x;
			T.y = y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int main()
{
	Num obj,var;
	obj.scan();
	obj.show();
	
	obj.copy(var);	//var is passed by reference
	var.show();
	return 0;
}
