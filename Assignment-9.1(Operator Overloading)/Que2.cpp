// Q 2]. WAP to explain copy constructor while passing parameter by value.

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
		Num()	//default constructor
		{
			x = 0;
			y = 0;
			cout<<"\nIn default constructor";	
		}
		Num(int a,int b)	//parameterized constructor
		{
			x = a;
			y = b;
			cout<<"\nIn parameterized constructor";
		}
		Num(Num & T)	//copy constructor
		{
			x = 90;
			y = 70;
			cout<<"\nIn copy constructor";
		}
		void change(Num Temp)	//Temp is local var of change fun, here copy constructor will get called for Temp, bcz Num Temp = obj;
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
	Num var;
	var.change(obj);	//obj will get assgn to Temp & copy constructor will get called for Temp
	var.show();
	return 0;
}
