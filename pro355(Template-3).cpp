//	Template

#include<iostream>
using namespace std;

template<class T,class V>
void add(T a, V b)
{
	cout<<"\nAddition = "<<a+b;
}

template<class T,class V>
void sub(T a,V b)
{
	cout<<"\nSubstraction = "<<a-b;
}

int main()
{
	add(10,20.5);
	sub(10,20);
}
