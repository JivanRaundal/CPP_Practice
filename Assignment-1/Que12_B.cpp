// 12. B]

#include<iostream>
using namespace std;

void fun(int & m, int *n)
{
	m = 5;
	*n = 8;
}

int main()
{
	int a=10, b=20;
	cout<<"\n"<<a<<" "<<b;
	fun(a,&b);
	cout<<"\n"<<a<<" "<<b;
	return 0;
}
