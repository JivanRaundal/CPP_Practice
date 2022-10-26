//				CLASS AND OBJECT
// Q. Scan two distances from user. Convert them in meter and print the distance which is greater in meter.
//    use scan(), compare() functions.

#include<iostream>
using namespace std;

class Distance
{
	int km, mtr;
	public:
		void scan()
		{
			cout<<"\nEnter distance in km & meter : ";
			cin>>km>>mtr;
		}
		void compare(Distance T)
		{
			// fisrt convert both distances in meter
			int total1, total2;
			total1 = (km*1000) + mtr;	//for calling object
			total2 = (T.km*1000) + T.mtr;	//for object which is passed by value
			
			// then compare both distances and print which is greater
			if(total1 > total2)
			{
				cout<<"\nGreater distance in meter is : "<<total1;
			}
			else
			{
				cout<<"\nGreater distance in meter is : "<<total2;
			}
		}
};

int main()
{
	Distance D1,D2;
	D1.scan();
	D2.scan();
	D1.compare(D2);	//one is calling object and another is passed by value
	return 0;
}
