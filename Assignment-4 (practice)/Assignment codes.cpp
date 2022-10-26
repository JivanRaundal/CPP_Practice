//					ASSIGNMENT-4 (practice)

#include<iostream>
using namespace std;
//---------------------------------------------------------------------
/* 1].

void myfun(int & m,int & n)
{
	m = 30;
	n = 40;
}
int main()
{
	int a = 10;
	int b = 20;
	cout<<"\na = "<<a<<"\tb = "<<b;	//10 20
	myfun(a,b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//30 40
	return 0;
}

*/
//---------------------------------------------------------------------
/* 2].

void fun(int *m,int *n)
{
	*m = 15;
	*n = 17;
}
int main()
{
	int a = 7;
	int b = 9;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	fun(&a, &b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//15 17
	return 0;
}

*/
//---------------------------------------------------------------------
/* 3].

void fun(int **m,int **n)
{
	**m = 15;
	**n = 17;
}
int main()
{
	int a = 7;
	int b = 9;
	int *p, *q;
	p = &a;
	q = &b;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	fun(&p, &q);
	cout<<"\na = "<<a<<"\tb = "<<b;	//15 17
	return 0;
}

*/
//---------------------------------------------------------------------
/* 4].

void fun(int *m,int *n)
{
	*m = 15;
	*n = 17;
}
int main()
{
	int a = 7;
	int b = 9;
	int *p, *q;
	p = &a;
	q = &b;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	fun(p,q);
	cout<<"\na = "<<a<<"\tb = "<<b;	//15 17
	return 0;
}

*/
//---------------------------------------------------------------------
/* 5].

void change(int **x,int **y)
{
	**x = 25;
	**y = 30;
}
void myfun(int *m,int *n)
{
	change(&m, &n);
}
int main()
{
	int a = 7;
	int b = 9;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	myfun(&a, &b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 30
	return 0;
}

*/
//---------------------------------------------------------------------
/* 6].

void change(int & x,int **y)
{
	x = 25;
	**y = 30;
}
void myfun(int & m,int *n)
{
	change(m, &n);
}
int main()
{
	int a = 7;
	int b = 9;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	myfun(a, &b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 30
	return 0;
}

*/
//---------------------------------------------------------------------
/* 7].

int change(int & y)
{
	y = 30;
	return 25;
}
int myfun(int & m)
{
	int x;
	x = change(m);
	return x;
}
int main()
{
	int a = 7;
	int b = 9;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	a = myfun(b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 30
	return 0;
}

*/
//---------------------------------------------------------------------
/* 8].

int myfun()
{
	return 25;
}
int main()
{
	int a = 7;
	cout<<"\na = "<<a;	//7
	a = myfun();
	cout<<"\na = "<<a;	//25
	return 0;
}

*/
//---------------------------------------------------------------------
/* 9].

int myfun(int & m)
{
	m = 20;
	return 25;
}
int main()
{
	int a = 7;
	int b = 9;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	a = myfun(b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 20
	return 0;
}

*/
//---------------------------------------------------------------------
/* 10].

int myfun(int *m)
{
	*m = 20;
	return 25;
}
int main()
{
	int a = 7;
	int b = 9;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 9
	a = myfun(&b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 20
	return 0;
}

*/
//---------------------------------------------------------------------
/* 11].

int change()
{
	return 25;
}
int myfun()
{
	int x;
	x = change();
	return x;
}
int main()
{
	int a = 7;
	cout<<"\na = "<<a;	//7
	a = myfun();
	cout<<"\na = "<<a;	//25
	return 0;
}

*/
//---------------------------------------------------------------------
/* 12].

int change(int **p)
{
	**p = 30;
	return 25;
}
int myfun(int *m)
{
	int x;
	x = change(&m);
	return x;
}
int main()
{
	int a = 7;
	int b = 10;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 10
	a = myfun(&b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 30
	return 0;
}

*/
//---------------------------------------------------------------------
/* 13].

int change(int & p)
{
	p = 30;
	return 25;
}
int myfun(int & m)
{
	int x;
	x = change(m);
	return x;
}
int main()
{
	int a = 7;
	int b = 10;
	cout<<"\na = "<<a<<"\tb = "<<b;	//7 10
	a = myfun(b);
	cout<<"\na = "<<a<<"\tb = "<<b;	//25 30
	return 0;
}

*/
//---------------------------------------------------------------------
/* 14].

void myfun(int *m)
{
	*m = 25;
}
int main()
{
	int a = 7;
	cout<<"\na = "<<a;	//7
	int *p = &a;
	myfun(p);
	cout<<"\na = "<<a;	//25
	return 0;
}

*/
//---------------------------------------------------------------------
// 15].

void change(int *n)
{
	*n = 25;
}
void myfun(int *m)
{
	change(m);
}
int main()
{
	int a = 7;
	cout<<"\na = "<<a;	//7
	int *p = &a;
	myfun(p);
	cout<<"\na = "<<a;	//25
	return 0;
}

