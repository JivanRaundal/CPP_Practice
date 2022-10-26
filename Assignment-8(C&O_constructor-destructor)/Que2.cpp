// Q 2]. WAP to explain nested classes.
// Note - If you want to use Inner class, You have to go through outer class

#include<iostream>
using namespace std;

class Outer		//Outer class
{
	public:
		int x;
		class Inner		//Inner class
		{
			public:
				int y;
				void scan()
				{
					cout<<"\nEnter y : ";
					cin>>y;
				}
				void print()
				{
					cout<<"\ny = "<<y;
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
	obj.var.print();
	
	//we can create object of Inner class in independent function
	Outer::Inner Temp;
	Temp.scan();
	Temp.print();
	return 0;
}
