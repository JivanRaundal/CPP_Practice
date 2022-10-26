// Q 7] scan details of 3 objects find which time is greater.

#include<iostream>
using namespace std;

class Time
{
	private:
		int hr,min;
	
	public:
		void scan()
		{
			cout<<"\nEnter time in hr & min : ";
			cin>>hr>>min;
		}
		
		void print()
		{
			cout<<"\nTime = "<<hr<<" hr & "<<min<<" min.";
		}
		
		void convert()
		{
			hr = hr + min/60;
			min = min%60;
		}
		
		void compare(Time D1, Time D2)
		{
			if(hr > D1.hr && hr > D2.hr)
			{
				cout<<"\nLargest Time is "<<hr<<" hr & "<<min<<" min.";
			}
			else if(D1.hr > hr && D1.hr > D2.hr)
			{
				cout<<"\nLargest Time is "<<D1.hr<<" hr & "<<D1.min<<" min.";
			}
			else if(D2.hr > hr && D2.hr > D1.hr)
			{
				cout<<"\nLargest Time is "<<D2.hr<<" hr & "<<D2.min<<" min.";
			}
			else
			{
				if(min > D1.min && min > D2.min)
				{
					cout<<"\nLargest Time is "<<hr<<" hr & "<<min<<" min.";
				}
				else if(D1.min > min && D1.min > D2.min)
				{
					cout<<"\nLargest Time is "<<D1.hr<<" hr & "<<D1.min<<" min.";
				}
				else if(D2.min > min && D2.min > D1.min)
				{
					cout<<"\nLargest Time is "<<D2.hr<<" hr & "<<D2.min<<" min.";
				}
				else
				{
					cout<<"\nAll Times Are Equal.";
				}
			}
		}
};

int main()
{
	Time T1,T2,T3;
	
	T1.scan();
	T1.convert();
	T1.print();
	
	T2.scan();
	T2.convert();
	T2.print();
	
	T3.scan();
	T3.convert();
	T3.print();
	
	T3.compare(T1,T2);
	
	return 0;
}
