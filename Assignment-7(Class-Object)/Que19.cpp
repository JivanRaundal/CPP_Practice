// Q 19] Explain References. (Theory + Program)

#include<iostream>
using namespace std;

int main()
{
	int x;
	x = 10;
	
	//reference variable at the time of declaration must be initialized compulsory
	int & y = x;	//y is reference of x;
	cout<<"\nx = "<<x<<"\ty = "<<y;
	//any change made in x will reflect in y & vice-versa.
	x = x + 1;
	cout<<"\nx = "<<x<<"\ty = "<<y;
	y = y + 1;
	cout<<"\nx = "<<x<<"\ty = "<<y;
	
	//we can create reference of reference also
	//we can also create multiple references of one variable.
	int & z = y;
	cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;
	
	//we cannot create reference to whole array. But, we can create a reference to individual array element.
	int num[3] = {4,6,8};
	//int & w = num;	//error
	int & w = num[1];
	cout<<"\nw = "<<w<<"\tnum[1] = "<<num[1];
	
	//reference of read-only variable(const) must be read only. Means, it must be declared with const keyword.
	const int a = 22;
	const int & b = a;
	cout<<"\na = "<<a<<"\tb = "<<b;
	
	//we can create reference of pointer also
	int d = 33;
	int *p;
	p = &d;
	int* & q = p;	//q is reference of pointer p
	cout<<"\np = "<<(long long)p<<"\t&p = "<<(long long)&p<<"\t*p = "<<*p; 
	cout<<"\nq = "<<(long long)q<<"\t&q = "<<(long long)&q<<"\t*q = "<<*q;
	
	return 0;
}
