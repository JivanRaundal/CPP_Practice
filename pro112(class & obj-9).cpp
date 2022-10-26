//					   CLASS AND OBJECT
// 1] private access specifier:- 
//			a) Only accessible in member function.
//			b) Not accessible in non-member function by any means.
// example:

#include<iostream>
using namespace std;

class Num
{
	private:
		int x;	//x is private. Hence, accessible in member fun only.
	public:
		void set()	//member function
		{
			x = 90;
		}
		void show()	//member function
		{
			cout<<"\nx = "<<x;
		}
};

int main()	//non-member function
{
	Num obj;
	//obj.x = 10;	//error, as x is private and not accessible in non-member function by any means.
	
	obj.set();
	obj.show();
	return 0;
}
