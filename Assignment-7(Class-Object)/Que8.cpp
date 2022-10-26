// Q 8] scan details for 3 objects. print all the prime numbers from each object.

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
				cout<<"\nElement "<<i<<" : ";
				cin>>num[i];
			}
		}
		void print()
		{
			cout<<"\n\nArray :\n";
			int i;
			for(i=0; i<5; i++)
			{
				cout<<" "<<num[i];
			}
		}
		void prime()
		{
			cout<<"\nPrime Numbers Are :\n";
			int i,j, flag;
			for(i=0; i<5; i++)
			{
				flag = 0;
				for(j=2; j<num[i]; j++)
				{
					if(num[i]%j == 0)
					{
						flag = 1;
						break;
					}
				}
				if(flag == 0)
				{
					cout<<" "<<num[i];
				}
			}
		}
};

int main()
{
	Number T1,T2,T3;
	
	cout<<"\nT1 :";
	T1.scan();
	T1.print();
	T1.prime();
	
	cout<<"\n\nT2 :";
	T2.scan();
	T2.print();
	T2.prime();
	
	cout<<"\n\nT3 :";
	T3.scan();
	T3.print();
	T3.prime();
	
	return 0;
}
