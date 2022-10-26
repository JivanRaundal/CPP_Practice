// Q 4]. WAP to explain nested class. (perform trial & error with different access-specifier)

// Note - If you want to reach Inner class, you have to go through Outer class.

#include<iostream>
using namespace std;

/*
class Outer
{
	public:
		int x;
		class Inner
		{
			public:
				int y;
				void show()
				{
					cout<<"\nIn Inner show(), y = "<<y;
				}
		};
		
		Inner var;
};

int main()
{
	Outer obj;
	obj.x = 10;
	obj.var.y = 20;
	cout<<"\nx = "<<obj.x;
	obj.var.show();
	
	//We can also create object of Inner class In Independent function
	Outer::Inner Temp;	//Temp is object of class Inner
	Temp.y = 7;
	Temp.show();
	
	return 0;
}
*/

// Note - If we define class Inner under private access-specifier, then we cannot create it's object in Independent
//        function. But we can creat it's object as a datamember of class Outer.

class Outer
{
	private:
		class Inner
		{
			public:
				int y;
				void show()
				{
					cout<<"\nIn Inner show(), y = "<<y;
				}
		};
		
	public:
		int x;
		Inner var;	//we can create object of var here. But not inside independent function
};

int main()
{
	Outer obj;
	obj.x = 10;
	obj.var.y = 20;	//No error, bcz var is public & it's y is also public
	cout<<"\nx = "<<obj.x;
	obj.var.show();
	
	//Outer::Inner Temp;	//Error - because Inner class is private
	
	return 0;
}
