//						RECURSION
//// NOTE:- plz refer to notebook notes for recursion for better understanding of stackframes.

#include<iostream>
using namespace std;

void myfun(int x)
{
	if(x<=3)
	{
		cout<<"\n"<<x;
		x=x+1;
		myfun(x);	//fun call within same fun is called as direct recursion.
		cout<<"\nBacktracking.";
	}
}

int main()
{
	cout<<"\nHello";
	myfun(1);
	cout<<"\nBye";
	return 0;
}
