// Q 6].

#include<iostream>
using namespace std;

class Time
{
	public:
		int hr, min;
		void scan()
		{
			cout<<"\nEnter the total time in hr and min : ";
			cin>>hr>>min;
		}
		void convert()
		{
			/*
			int reminder = min%60;
			int ans = min/60;
			hr = hr+ans;
			min = reminder;
			*/
			hr = hr+(min/60);
			min = min%60;
		}
		void show()
		{
			cout<<"\nTime = "<<hr<<" hr & "<<min<<" min.";
		}
};

int main()
{
	Time T1,T2;
	T1.scan();
	T2.scan();
	
	int total;
	T1.convert();
	cout<<"\nTime in proper format is : ";
	T1.show();
	
	T2.convert();
	cout<<"\nTime in proper format is : ";
	T2.show();
	return 0;
}
