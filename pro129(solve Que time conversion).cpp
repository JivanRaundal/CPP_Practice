//					CLASS AND OBJECT
// Q. scan two times from user in hr and min. Convert the time in proper(standard) format.
//    eg - if user enters 3hr and 75min then proper format will 4hr and 15min.

#include<iostream>
using namespace std;

class Time
{
	int hr, min;
	public:
		void scan()
		{
			cout<<"\nEnter the time in hour and min : ";
			cin>>hr>>min;
		}
		void convert()
		{
			int reminder, ans;
			reminder = min%60;
			ans = min/60;
			
			hr = hr + ans;
			min = reminder;
			/* OR
			hr = hr + (min/60);
			min = (min%60);
			*/
		}
		void show()
		{
			cout<<"\nTime in proper format is : "<<hr<<" hr & "<<min<<" min.";
		}
};

int main()
{
	Time T1,T2;
	T1.scan();
	T2.scan();
	T1.convert();
	T2.convert();
	T1.show();
	T2.show();
	return 0;
}
