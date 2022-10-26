//				CLASS AND OBJECT
// STATIC DATAMEMBER
// Note - Default value of static datamember is 0 (zero).

#include<iostream>
using namespace std;

class Number
{
	public:
		static int x;
		int y;
};

int Number::x;

int main()
{
	cout<<"\nx = "<<Number::x;	// 0
	Number::x = 10;
	cout<<"\nx = "<<Number::x;	// 10
	return 0;
}
