#include<iostream>
using namespace std;

template<class T,class V>
void add(T a,V b)
{
	cout<<"\nAddition = "<<a+b;
}

int main()
{
	add(10,20);
	add<int>(10.2f,20);
	return 0;
}
