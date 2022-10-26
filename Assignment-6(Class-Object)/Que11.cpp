// Q 11] scan values for 2 objects. convert them in proper output. Do not call convert from scan() or show().
//       You may add another function to call convert(). eg - input = 3hr 135min; output = 5hr 15min

#include<iostream>
using namespace std;

class Time
{
	private:
		int hr, min;
		void convert()
		{
			hr = hr + min/60;
			min = min%60;
		}
	public:
		void scan()
		{
			cout<<"\nEnter Time in hr & min : ";
			cin>>hr>>min;	
		}
		void show()
		{
			cout<<"\nTime = "<<hr<<" hr & "<<min<<" min.";
		}
		void call_convert()
		{
			convert();
		}
};

int main()
{
	Time T1,T2;
	T1.scan();
	T2.scan();
	
	cout<<"\nBefore converting\n";
	T1.show();
	T2.show();
	
	//convert into proper format
	T1.call_convert();
	T2.call_convert();
	
	cout<<"\n\nAfter converting\n";
	T1.show();
	T2.show();
	return 0;
}
