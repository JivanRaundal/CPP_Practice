//					CLASS & OBJECT
// FRIEND FUNCTION:-
// Note - forward declaration is needed bcz, compilar initially don't know about Digit. So, we have to tell him that
//        Digit is class (User defined datatype) using forward declaration.

#include<iostream>
using namespace std;

class Digit;	//forward declaration
class Number
{
	private:
		int x;
		friend void scan(Number & Tn,Digit & Td);
		friend void print(Number Tn,Digit Td);
};

class Digit
{
	private:
		int y;
		friend void scan(Number & Tn,Digit & Td);
		friend void print(Number Tn,Digit Td);
};

void scan(Number & Tn,Digit & Td)
{
	cout<<"\nEnter x & y : ";
	cin>>Tn.x>>Td.y;
}

void print(Number Tn,Digit Td)
{
	cout<<"\nx = "<<Tn.x<<"\ty = "<<Td.y;
}

int main()
{
	Number objn;
	Digit vard;
	scan(objn,vard);
	print(objn,vard);
	return 0;
}
