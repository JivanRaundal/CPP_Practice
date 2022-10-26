// 12. A] complete the code to get output mentioned in comment.

#include<iostream>
using namespace std;

void fun(int *m, int *n)
{
	*m = 23;
	*n = 67;
}

int main()
{
	int a=10, b=20;
	cout<<"\n"<<a<<" "<<b;
	fun(&a, &b);
	cout<<"\n"<<a<<" "<<b;
	return 0;
}
