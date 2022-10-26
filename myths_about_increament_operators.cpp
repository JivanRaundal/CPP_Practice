// Some myths about pre-increament & post-increament

#include<iostream>
using namespace std;

int main()
{
	int a  = 10;
	int c = ++a;
	cout<<"c = "<<c<<"\ta = "<<a;
	
	volatile int b = 10;
	c = ++b + 2 + b++;
	cout<<"\nc = "<<c<<"\tb = "<<b;
	
	int p = 2;
	++p;
	cout<<"\np = "<<p;
	p++;
	cout<<"\np = "<<p;
	return 0;
}
