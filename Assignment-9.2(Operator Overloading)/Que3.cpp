// Q 3]. Complete the class definition for given main() funtion.

#include<iostream>
using namespace std;

class Time
{
		int hr,min;
	public:
		Time()	//constructor
		{
			cout<<"\nEnter Time in hr & min : ";
			cin>>hr>>min;
			//converting time in proper format
			hr = hr + min/60;
			min = min%60;
		}
		int operator>(Time T)
		{
			if(hr > T.hr)
			{
				return 1;
			}
			else if(hr < T.hr)
			{
				return 0;
			}
			else
			{
				if(min > T.min)
				{
					return 1;
				}
				else if(min < T.min)
				{
					return 0;
				}
				else
				{
					//(if both are same return 1 or 0)
					return 1;	//or return 0;
				}
			}
		}
};

int main()
{
	Time T1,T2,T3;
	if(T1 > T2 && T1 > T3)
	{
		cout<<"\nFirst Time is largest";
	}
	else if(T2 > T1 && T2 > T3)
	{
		cout<<"\nSecond Time is largest";
	}
	else
	{
		cout<<"\nThird Time is largest";
	}
	return 0;
}
