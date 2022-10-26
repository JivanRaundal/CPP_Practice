// 12. C]

#include<iostream>
using namespace std;

int fun(int *m)
{
	*m =  8;
	return 5;
}

int main()
{
	int a=10, b=20;
	cout<<"\n"<<a<<" "<<b;
	a = fun(&b);
	cout<<"\n"<<a<<" "<<b;
	return 0;
}
