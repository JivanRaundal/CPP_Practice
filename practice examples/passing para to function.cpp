// Parameter passing types :-
// 1) pass by value
// 2) pass by address
// 3) pass by reference

#include<iostream>
using namespace std;

/*
//pass by value
int add(int a,int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int main()
{
	int x,y;
	cout<<"\nEnter value of x & y : ";
	cin>>x>>y;
	
	int ans = add(x,y);
	cout<<"\nAddition of "<<x<<" & "<<y<<" = "<<ans;
	return 0;
}
*/

// pass by address

/*
void myfun(int *p,int * q)
{
	*p = 2;
	*q = 4;
}

int main()
{
	int x,y;
	x = 10;
	y = 20;
	cout<<"\nBefore function call, x = "<<x<<" y = "<<y;
	myfun(&x,&y);				//pass by address
	cout<<"\nAfter function call, x = "<<x<<" y = "<<y;
	return 0;
}
*/

/*
void myfun(int **m,int **n)
{
	**m = 2;
	**n = 4;
}

int main()
{
	int x,y;
	x = 10;
	y = 20;
	
	int *p = &x;
	int *q = &y;
	
	cout<<"\nBefore fun call, x = "<<*p<<" y = "<<*q;
	myfun(&p,&q);
	cout<<"\nAfter fun call, x = "<<x<<" y = "<<y;
	
	cout<<"\n&x = "<<(long long)&x<<"\tp = "<<(long long)p<<"\t&p = "<<(long long)&p;
	cout<<"\n&y = "<<(long long)&y<<"\tq = "<<(long long)q<<"\t&q = "<<(long long)&q;
	
	return 0;
}
*/

/*
//Q. find area & circumference of circle using only 1 function.

void circle(int r,float *parea,float *pcircm)
{
	*parea  = 3.14*r*r;
	*pcircm = 2*3.14*r;
}

int main()
{
	int rad;
	cout<<"\nEnter radius of circle : ";
	cin>>rad;
	float area,circm;
	circle(rad,&area,&circm);
	cout<<"\nArea = "<<area<<"\tcircumference = "<<circm;
	return 0;
}
*/

// pass by reference

void myfun(int & a,int & b)		//by reference
{
	a = 2;
	b = 4;
}

int main()
{
	int x,y;
	x = 10;
	y = 20;
	cout<<"\nBefore fun call, x = "<<x<<" y = "<<y;
	myfun(x,y);
	cout<<"\nAfter fun call, x = "<<x<<" y = "<<y;
}






