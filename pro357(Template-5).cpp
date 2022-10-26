// Template 
// Note :- Compiler can find guess only for those template variables which are mentioned inside parameter list & not
//		   for all the template variables. It will give error if not guessed.
// Note :- To avoid above problem we can explicitly mantioned datatype in angular brackets <int,int>, so that compiler
//		   will not guess datatypes, it will refer to explicitly mentioned datatypes.

#include<iostream>
using namespace std;

template<class T, class V>
void add(T a, T b)
{
	V x = 7.6;		//Note :- V is not mentioned inside para list so it may give error
	cout<<"\nAddition = "<<a+b;
	cout<<"\nx = "<<x;
}

int main()
{
	//add(10,20.5);
	//add<int>(10,20.5);
	add<int,float>(10,20.5);		//will not give error bcz we are explicitly mentioning datatype here
}
