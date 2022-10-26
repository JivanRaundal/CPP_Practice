// Template variables can deal with pointers also.

#include<iostream>
using namespace std;

template<class T>
void print(T x)
{
	cout<<"\nIn print() fun, x = "<<(long long)x;
}

int main()
{
	int x = 10;
	print(&x);
	float y = 20;
	print(&y);
	return 0;
}
