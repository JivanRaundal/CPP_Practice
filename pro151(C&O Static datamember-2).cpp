// 							CLASS AND OBJECT
// STATIC DATAMEMBER
// Note - To access static datamember in non-member function, we have to use Membership Identity Label.
//        Membership Identity Label means classname & :: operator.

#include<iostream>
using namespace std;

class Number
{
	public:
		static int x;
		int y;
};

int Number::x = 10;

int main()
{
	// accessing static datamember in non-member function using Membership Identity Label.
	cout<<"\nx = "<<Number::x;
	Number::x = 15;
	cout<<"\nx = "<<Number::x;
	return 0;
}
