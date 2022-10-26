// Q 15]. WAP to explain that constructor and destructor of one class can be made friend of another class.

#include<iostream>
using namespace std;

class Digit
{
		int x;
	public:
		Digit();
		~Digit();
};

class Number
{
		int y;
		
		friend Digit::Digit();
		friend Digit::~Digit();
};

Digit::Digit()
{
	cout<<"\nIn Digit constructor";
	Number Temp;
	cout<<"\nEnter x & y : ";
	cin>>x>>Temp.y;
	cout<<"\nx = "<<x<<"\ty = "<<Temp.y;
}

Digit::~Digit()
{
	cout<<"\nIn Digit destructor";
	Number T;
	cout<<"\nEnter x & y : ";
	cin>>x>>T.y;
	cout<<"\nx = "<<x<<"\ty = "<<T.y;
}

int main()
{
	Digit obj;
	return 0;
}
