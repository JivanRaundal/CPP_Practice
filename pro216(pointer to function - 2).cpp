// POINTER TO FUNCTION:-
// Note - Functions also has addresses bcz function's get memory on Text Section & it's Local variables get
//        Memory on Stack.
// example :-

#include<iostream>
using namespace std;

int multi(int a,int b,int c)
{
	cout<<"\nIn multi()";
	return a*b*c;
}

int main()
{
	int (*ptr)(int ,int, int);	//ptr is pointer to function whose returntype is int & has 3 parameters
	ptr = &multi;	//ptr stores address of multi() function.

	cout<<"\nMultiplication = "<<(*ptr)(3,4,5);	//same as - cout<<multi(3,4,5);
	return 0;
}
