// Template

#include<iostream>
using namespace std;

template<class T>
void add(T a, T b)
{
	cout<<"\nAddition = "<<a+b;
}
// Note - we can explicitly mentioned datatype of T in angular brackets <int> written between fun name & parameter list.

int main()
{
	add<int>(10,20);		//explicitly int
	add<int>(2.5,4.7);		//explicitly int
	add<float>(2.5,4.7);	//explicitly float
	add<double>(10,20);		//explicitly double
	add(3.5f,2.7f);			//compiler guess
	return 0;
}
