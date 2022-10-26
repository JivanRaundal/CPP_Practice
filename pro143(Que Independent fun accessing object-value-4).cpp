// 					CLASS AND OBJECT
// INDEPENDENT FUNCTIONS (NON-MEMBER FUN) ACCESSING OBJECT OR IT'S VALUES.
// Q. Complete the following code for given main() function.
//    (In this eg, there is function overloading of getdata() function)

#include<iostream>
using namespace std;

class Num
{
	public:
		int x,y;
};

Num getdata()
{
	Num temp;
	cout<<"\nEnter x & y : ";
	cin>>temp.x>>temp.y;
	return temp;
}

void getdata(Num & N)	//by reference
{
	cout<<"\nEnter x & y : ";
	cin>>N.x>>N.y;
}

void show(Num N)	//by value
{
	cout<<"\nx = "<<N.x<<"\ty = "<<N.y;
}

int main()
{
	Num T1,T2;
	T1 = getdata();
	getdata(T2);
	show(T1);
	show(T2);
	return 0;
}
