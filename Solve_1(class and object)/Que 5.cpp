// Q 5].

#include<iostream>
using namespace std;

class Distance
{
	int km, mtr;
	public:
		void scan()
		{
			cout<<"\nEnter the total Distance in km & mtr : ";
			cin>>km>>mtr;
		}
		int convert()
		{
			int meter;
			meter = (km*1000)+mtr;
			return meter;
		}
};

int main()
{
	Distance T1,T2;
	T1.scan();
	T2.scan();
	
	int total;
	total = T1.convert();
	cout<<"\nTotal Distance in meter is : "<<total;
	
	total = T2.convert();
	cout<<"\nTotal Distance in meter is : "<<total;
	return 0;
}
