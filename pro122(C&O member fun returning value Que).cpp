//						CLASS AND OBJECT
// MEMBER FUNCTION RETURNING VALUES
// Q. Scan two objects of class Time from user. Sacn time in hr & min. (eg- 3hr & 40min). Convert the total
//    time into minute and print the result in main().

#include<iostream>
using namespace std;

class Time
{
	int hr, min;
	public:
		void scan()
		{
			cout<<"\nEnter the total time in hr and min : ";
			cin>>hr>>min;
		}
		int convert()
		{
			int minutes;
			minutes = (hr*60)+min;
			return minutes;
		}
};

int main()
{
	Time T1,T2;
	T1.scan();
	T2.scan();
	
	int total;
	total = T1.convert();
	cout<<"\nTotal Time in minutes is : "<<total;
	
	total = T2.convert();
	cout<<"\nTotal Time in minutes is : "<<total;
	return 0;
}
