// Q 6]. Complete the code. Do not change main() function.

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

void scan(Number *p)	//p is pointer to object
{
	cout<<"\nEnter x & y : ";
	cin>>p->x>>p->y;
}
void print(Number *p)	//p is pointer to object
{
	cout<<"\nx = "<<p->x<<"\ty = "<<p->y;
}

int main()
{
	Number T1,T2;
	scan(&T1);
	scan(&T2);
	print(&T1);
	print(&T2);
	return 0;
}

