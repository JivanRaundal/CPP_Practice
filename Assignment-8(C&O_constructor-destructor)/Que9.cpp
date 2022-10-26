// Q 9]. WAP to explain copy constructor. Try to explain that when we pass oject by value, copy constructor gets called.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		Num()
		{
			cout<<"\nIn default constructor";
		}
		Num(int a,int b)
		{
			x = a;
			y = b;
			cout<<"\nIn parameterized constructor";
		}
		Num(Num & T)	//copy constructor
		{
			x = 90;
			y = 50;
			cout<<"\nIn copy constructor";
		}
		void change(Num Temp)
		{
			x = Temp.x;
			y = Temp.y;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ty = "<<y;
		}
};

int main()
{
	Num obj(5,6);
	Num var = obj;
	var.show();
	Num T;
	T.change(var);
	T.show();
	return 0;
}
