// Q 11]. WAP to explain constructor overloading.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		
		Num()	//default constructor
		{
			cout<<"\nIn default constructor.";
			x = 0;
			y = 0; 
		}
		Num(int a,int b)	//2 parameterized constructor
		{
			cout<<"\nIn 2 parameterized constructor.";
			x = a;
			y = b;
		}
		Num(Num & T)	//copy constructor
		{
			cout<<"\nIn copy constructor.";
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
	Num obj;	//default constructor will be called
	obj.show();
	
	Num var(3,5);	//2 parameterized constructor will be called
	var.show();
	
	Num Temp(var);	//copy constructor will be called
	Temp.show();
	
	return 0;
}
