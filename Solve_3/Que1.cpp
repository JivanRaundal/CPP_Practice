// Q 1].

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

class Digit
{
	public:
		void scan(Number & T)
		{
			cout<<"\nEnter x & y : ";
			cin>>T.x>>T.y;
		}
		void show(Number temp)
		{
			cout<<"\nx = "<<temp.x<<"\ty = "<<temp.y;
		}
};

int main()
{
	Number obj;
	Digit var;
	var.scan(obj);
	var.show(obj);
	return 0;
}
