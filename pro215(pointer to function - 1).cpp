// POINTER TO FUNCTION:-
// Note - Functions also has addresses bcz function's get memory on Text Section & it's Local variables get
//        Memory on Stack.
// example :-

#include<iostream>
using namespace std;

void myfun()
{
	cout<<"\nIn myfun()";
}

void print()
{
	cout<<"\nIn print()";
}

void add(int a,int b)
{
	cout<<"\nIn add(), Addition = "<<a+b;
}

int main()
{
	//pointer to function must be declared first
	void (*p)();	/* p is a pointer to function whose returntype is void and has no any parameter. */
	// Note - p can store address of any function which has void returntype & no any parameter. eg - myfun() & print()
	
	p = &myfun;	//Assigning address of myfun() to p, not calling myfun(). So not mentioned brackets for myfun.
	(*p)();	//calling myfun() using pointer to function myfun().	same as calling  - myfun();
	
	p = &print;	//p now stores address of print() function.
	(*p)();	//calling print() function using pointer to function print().	//same as - print();
	
	void (*pfun)(int a,int b);	// pfun is a pointer to function whose returntype is void ans has 2 parameters.
	// OR void (*pfun)(int,int);	No need to mentioned varible name at declaration.
	
	pfun = &add;	//pfun stores address of add() function.
	(*pfun)(4,5);	//calling add() function using pointer to function.	same as - add(4,5);
	
	return 0;
}
