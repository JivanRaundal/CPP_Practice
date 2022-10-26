// 							CLASS & OBJECT
// ARRAY WITHIN CLASS:-
// Q. Find largest of three arrays using class & object such that each object has one array.

#include<iostream>
using namespace std;

class Number
{
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
		
		int max_element()
		{
			int i, max;
			max = num[0];
			for(i=0; i<5; i++)
			{
				if(num[i] > max)
				{
					max = num[i];	
				}
			}
			return max;	
		}
};

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T1.print();
	T2.scan();
	T2.print();
	T3.scan();
	T3.print();
	
	int m1,m2,m3;
	m1 = T1.max_element();
	m2 = T2.max_element();
	m3 = T3.max_element();
	
	/*if(m1>m2 && m1>m3)
	{
		cout<<"\n\nMaximum element = "<<m1;
	}
	else if(m2>m1 && m2>m3)
	{
		cout<<"\n\nMaximum element = "<<m2;
	}
	else
	{
		cout<<"\n\nMaximum element = "<<m3;
	}*/
	
	 //OR using conditional operator
	m1 = m1>m2?m1:m2;
	m1 = m1>m3?m1:m3;
	cout<<"\nMaximum element = "<<m1;
	
	return 0;
}
