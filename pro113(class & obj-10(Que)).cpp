// Q. write a class distance, scan a total distance from user and convert it into meter and return the result
// to main() function using class and object.

#include<iostream>
using namespace std;

class Distance
{
	float km, mtr;
	public:
		void scan()
		{
			cout<<"\n\nEnter the total distance in KM : ";
			cin>>km;
		}
		float convert()
		{
			mtr = 1000 * km;
			return mtr;
		}
};

int main()
{
	Distance T1, T2;
	T1.scan();
	float ans;
	ans = T1.convert();
	cout<<"\nTotal distance in meter is : "<<ans<<" meters.";
	
	T2.scan();
	ans = T2.convert();
	cout<<"\nTotal distance in meter is : "<<ans<<" meters.";
	return 0;
}
