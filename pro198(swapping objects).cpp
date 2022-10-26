//				CLASS & OBJECT
// Q. swap objects - obj & var.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void set(int a,int b)
		{
			x = a;
			y = b;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};
int main()
{
	Number obj,var;
	obj.set(10,20);
	var.set(5,6);
	cout<<"\nBefore Swapping\n";
	cout<<"\nobj : ";
	obj.show();
	cout<<"\nvar : ";
	var.show();
	
	//swapping
	Number temp;
	temp = obj;
	obj = var;
	var = temp;
	
	cout<<"\n\nAfter swapping\n";
	cout<<"\nobj : ";
	obj.show();
	cout<<"\nvar : ";
	var.show();
	return 0; 
}
