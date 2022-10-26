// 											PASS BY ADDRESS
// example to develop logic

#include<iostream>
using namespace std;

void my_fun(int **m, int **n)
{
	**m = 24;	// x is changed to 24;
	**n = 78;	// y is changed to 78;
}

int main()
{
	int x,y;
	x=10;
	y=20;
	
	int *p,*q;
	p=&x;
	q=&y;
	
	cout<<"\n\tBEFORE FUNCTION CALL";
	cout<<"\nx = "<<x<<"\t"<<"y = "<<y;
	
	my_fun(&p, &q);
	
	cout<<"\n\tAFTER FUNCTION CALL";
	cout<<"\nx = "<<x<<"\t"<<"y = "<<y;
	return 0;
	
	
}
