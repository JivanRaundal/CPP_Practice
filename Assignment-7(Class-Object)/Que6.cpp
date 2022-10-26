// Q 6] scan 2 distances from user. compare them.

#include<iostream>
using namespace std;

class Distance
{
		int inch,feet;
	public:
		void scan()
		{
			cout<<"\nEnter Distance in inch & feet : ";
			cin>>feet>>inch;
		}
		
		void print()
		{
			cout<<"\nDistance = "<<feet<<" feet & "<<inch<<" inch.";
		}
		
		void convert()
		{
			feet = feet + inch/12;
			inch = inch%12;
		}
		
		void compare(Distance temp)
		{
			if(feet > temp.feet)
			{
				cout<<"\nGreater Distance is "<<feet<<" feet & "<<inch<<" inch.";
			}
			else if(feet < temp.feet)
			{
				cout<<"\nGreater Distance is "<<temp.feet<<" feet & "<<temp.inch<<" inch.";	
			}
			else
			{
				if(inch > temp.inch)
				{
					cout<<"\nGreater Distance is "<<feet<<" feet & "<<inch<<" inch.";
				}
				else if(inch < temp.inch)
				{
					cout<<"\nGreater Distance is "<<temp.feet<<" feet & "<<temp.inch<<" inch.";	
				}
				else
				{
					cout<<"\nBoth Distances Are Equal.";
				}
			}
		}
};

int main()
{
	Distance D1,D2;
	D1.scan();
	D1.convert();
	D1.print();
	
	D2.scan();
	D2.convert();
	D2.print();
	
	D1.compare(D2);
	
	return 0;
}
