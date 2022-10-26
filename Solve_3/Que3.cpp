// Q 3].

#include<iostream>
using namespace std;

class Number;	//forward declaration

class Digit
{
	public:
		void scan(Number &);
		void show(Number);
};

class Number
{
	private:
		int x;
		friend void Digit::scan(Number &);
		friend void Digit::show(Number);
};

void Digit::scan(Number & T)
{
	cout<<"\nEnter value of x : ";
	cin>>T.x;
}

void Digit::show(Number T)
{
	cout<<"\nx = "<<T.x;
}

int main()
{
	Number T;
	Digit  D;
	D.scan(T);
	D.show(T);
	return 0;
}
