//			CLASS & OBJECT
// ARRAY WITHIN CLASS :-
// Q. Calculate average of three array's of class Number & print in main() function.

#include<iostream>
using namespace std;

class Number
{
	private:
		int num[5];
		
	public:
		
		void scan()
		{
			cout<<"\n\nInput Array\n";
			int i;
			for(i=0; i<5; i++)
			{
				cout<<"\nelement "<<i<<" : ";
				cin>>num[i];
			}
		}
		
		void print()
		{
			cout<<"\n\nPrinting Array\n";
			int i;
			for(i=0; i<5; i++)
			{
				cout<<" "<<num[i];
			}
		}
		
		float average()
		{
			float avg;
			int i, sum = 0;
			for(i=0; i<5; i++)
			{
				sum = sum + num[i];
			}
			avg = sum/5.0;	//calculating average
			return avg;
		}
};

int main()
{
	Number obj,var;
	float avg1, avg2;
	
	obj.scan();
	obj.print();
	avg1 = obj.average();
	cout<<"\nAverage of obj = "<<avg1;
	
	var.scan();
	var.print();
	avg2 = var.average();
	cout<<"\nAverage of var = "<<avg2;
	return 0;
}
