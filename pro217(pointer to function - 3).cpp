// POINTER TO FUNCTION:-
// Note - Functions also has addresses bcz function's get memory on Text Section & it's Local variables get
//        Memory on Stack.
// Note - passing address of one function to another function as a parameter using pointer to function.
// example :-

#include<iostream>
using namespace std;

int multi(int a,int b,int c)
{
	cout<<"\nIn multi()";
	return a*b*c;
}

void myfun(int (*ptr)(int ,int ,int))	//ptr is pointer to multi() & stores address of function multi().
{
	int ans;
	ans = (*ptr)(3,4,5);	//same as --> ans = multi(3,4,5); 
	cout<<"\nAnswer = "<<ans;
}

int main()
{
	myfun(&multi);	//passing address of multi() as a parameter to myfun().
	return 0;
}
