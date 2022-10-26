//		EXPLICIT CONSTRUCTOR - It is 4th type of constructor which is not in syllabus.
// Q. explain use of explicit keyword in c++ ...? OR explain explicit constructor in c++.
// explicit constructor - explicit is keyword which restricts constructor from implicit typeconversion/typecasting.
// Num obj = 3;	(for this assgn compiler must give error bcz obj is of type Num & 3 is of type int. But it does not give error
// Bcz of parameterized constructor). Num obj = 3; is considered as Num obj(3); implicitly.
// Explicit constructor will restrict this assgn.
// syntax :- explicit class_name(parameter);
// consoder following example :-

#include<iostream>
using namespace std;

class Num
{
	public:
		int x;
		Num()
		{
			cout<<"\nIn default constructor";
		}
		Num(int a)	//1 parameterized constructor / conversion constructor
		{
			x = a;
			cout<<"\nIn 1 parameterized constructor";
		}
};

void myfun(Num obj)
{
	cout<<"\nIn myfun()";
}

int main()
{
	Num var(5);
	
	Num Temp = 10;	//allows this assgn bcz of 1 parameterized constructor
	myfun(20);		//no error
	
	cout<<"\nHello";
	return 0;
}
