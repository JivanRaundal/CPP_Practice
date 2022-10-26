//				CLASS AND OBJECT
// Q. Convert distance in proper format according to example.
//    eg - if user enters 1 km & 2390 mtr then proper format should be 3 km & 390 mtr.

#include<iostream>
using namespace std;

class Distance
{
	int km, mtr;
	public:
		void scan()
		{
			cout<<"\nEnter disance in km & mtr : ";
			cin>>km>>mtr;
		}
		void convert()
		{
			km = km + (mtr/1000);
			mtr = mtr%1000;
		}
		void show()
		{
			cout<<"\nDistance in proper format is : "<<km<<" km & "<<mtr<<" mtr.";
		}
};

int main()
{
	Distance T1,T2;
	T1.scan();
	T2.scan();
	T1.convert();
	T2.convert();
	T1.show();
	T2.show();
	return 0;
}
