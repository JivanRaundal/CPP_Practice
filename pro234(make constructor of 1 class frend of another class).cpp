//			CONSTRUCTOR
// Making Constructor of one class a Friend of another class :- (same as making member fun of one class friend of another)
// example :-

#include<iostream>
using namespace std;

//Note - No need of forward declaration here, bcz we are not using class Digit in class Num anywhere.
 
class Num
{
	public:
		int x,y;
		
		Num(int, int);	//2 parameterized constructor declaration
};

class Digit
{
	private:
		int d;
		Digit()
		{
			cout<<"\nIn default constructor of class Digit.";
		}
		friend Num::Num(int, int);	//constructor of class Num becomes friend of class Digit. So, private members of
									// class Digit are accessible in class Num's 2 parameterized constructor.
};

Num::Num(int a,int b)
{
	Digit Temp;
	Temp.d = 10;
	cout<<"\nIn 2 parameterized constructor of class Num, d = "<<Temp.d;
}

int main()
{
	Num obj(2,3);
	return 0;
}
