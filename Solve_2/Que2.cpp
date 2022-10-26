// Q 2]. WAP to explain function overloading.

#include<iostream>
using namespace std;

void add(int a,int b)	//---(1)
{
	cout<<"\n2 int addition = "<<a+b;
}

void add(double a,double b,double c)	//---(2)
{
	cout<<"\n3 double addition = "<<a+b+c;
}

void add(int a,int b,int c)		//---(3)
{
	cout<<"\n3 int addition = "<<a+b+c;
}

void add(float a,float b)	//---(4)
{
	cout<<"\n2 float addition = "<<a+b;
}

int main()
{
	add(4,3,2);			//fun 3 will called
	add(3.4,6.7,3.3);	//fun 2 will called
	add(5,4);			//fun 1 will called
	//add(3.4,6.7);	 	//will find 2 matches i.e. fun 1 & fun 4 & will generate Ambuiguity Error.
						// Solution - Explicit Typecasting to required datatype
	add((float)3.4,(float)6.7);	//fun 4 will called
	add((int)3.4,(int)6.7);		//fun 1 will called

	return 0;
}
