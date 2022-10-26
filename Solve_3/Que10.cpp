// Q 10].

#include<iostream>
using namespace std;

class Number
{
		int num[5];
	public:
		void scan()
		{
			int i;
			cout<<"\n\nEnter values of array\n";
			for(i=0; i<5; i++)
			{
				cout<<"\nElement "<<i<<" : ";
				cin>>num[i];
			}
		}
		void print()
		{
			int i;
			cout<<"\n\nArray :\n";
			for(i=0; i<5; i++)
			{
				cout<<" "<<num[i];
			}
		}
		int max()
		{
			int i, max = 0;
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
	int m1,m2,m3;
	
	T1.scan();
	T1.print();
	m1 = T1.max();
	T2.scan();
	T2.print();
	m2 = T2.max();
	T3.scan();
	T3.print();
	m3 = T3.max();
	
	if(m1 > m2 && m1 > m3)
	{
		cout<<"\n\nMaximum element = "<<m1;
	}
	else if(m2 > m1 && m2 > m3)
	{
		cout<<"\n\nMaximum element = "<<m2;
	}
	else
	{
		cout<<"\n\nMaximum element = "<<m3;
	}
	return 0;
}
