// Template
// # Multiple Template Variables :-

#include<iostream>
using namespace std;

template<class T,class V>
void add(T a, V b)
{
	T x = 7.6;
	V y = 7.6;
	cout<<"\nAddition = "<<a+b;
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

int main()
{
	add(10,20.5);
	add<int,int>(10,20.5);
	add<int>(10,20.5);
	return 0;
}
