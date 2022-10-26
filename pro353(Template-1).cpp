// Template Handling - eg of Compile Time Polymorphism

#include<iostream>
using namespace std;

template<class T>
void add(T a, T b)		//Note - T is sustitute of original datatype, T will get replace by original datatype by 
{						//       compiler at compile-time, Hence template is called as compile-time polymorphism
	T ans;
	ans = a + b;
	cout<<"\nAnswer = "<<ans;
}
// Note - here, datatype of T is guess by compiler
int main()
{
	add(10,20);		//int
	add(2.5,4.2);	//double
	add(3.7f,9.7f);	//float
	return 0;
}
