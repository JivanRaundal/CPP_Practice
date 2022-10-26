// Q 3] WAP to explain function overloading.

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
void add(int a,int b,int c)	//---(3)
{
	cout<<"\n3 int addition = "<<a+b+c;
}
void add(float a,float b)	//---(4)
{
	cout<<"\n2 float addition = "<<a+b;
}

int main()
{
	add(2,3);	// fun 1 will called
	add(4,8,7);	//fun 3 will calles
	add(2.3,6.9,4.2);	//fun 2 will called
	//add(4.2,6.7); //error - ambiguous
	add((float)2.3,(float)9.3);	//fun 4 will called bcz of typecasting
	add((int)2.3,(int)9.3);	//fun 1 will called	bcz of typecasting
	
	return 0;
}
