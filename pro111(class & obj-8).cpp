// 					CLASS AND OBJECT
// NOTE:- you cannot call member function of one class using object of another class.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		void show()
		{
			cout<<"\nIn show()";
		}
};

class Digit
{
	public:
		int y;
		void print()
		{
			cout<<"\nIn print()";
		}
};

int main()
{
	Number obj;	//object of Number class
	Digit  var;	//object of Digit class
	
	obj.show();
	//var.show();	//error, bcz show() is member of Number class and var is object of Digit class
	
	var.print();
	//obj.print(); //error, bcz print() is member of Digit class and obj is object of Number class
	
	return 0;
}
