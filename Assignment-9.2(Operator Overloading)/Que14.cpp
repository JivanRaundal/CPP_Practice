// Q 14]. Write a program to explain Inner classes.

#include<iostream>
using namespace std;

class Outer
{
	public:
		int x;
		class Inner
		{
			public:
				int y;
				void show();
				/*{
					cout<<"\nIn Inner show(), y = "<<y;
				}*/
		};
		
		Inner var;	//composition
};

void Outer::Inner::show()
{
	cout<<"\nIn Inner show(), y = "<<y;
}

int main()
{
	// Note - If we want to reach to Inner class, we have to go through Outer class.
	Outer obj;
	obj.x = 10;
	obj.var.y = 20;
	cout<<"\nx = "<<obj.x;
	obj.var.show();
	
	//we can also create object of Inner In main()
	Outer::Inner Temp;
	Temp.y  =22;
	cout<<"\nIn main(), y = "<<Temp.y;
	return 0;
}
