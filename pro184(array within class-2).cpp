//			CLASS & OBJECT
// ARRAY WITHIN CLASS :-
// example:-

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
			cout<<"\nPrinting Array\n";
			int i;
			for(i=0; i<5; i++)
			{
				cout<<" "<<num[i];
			}
		}
};

int main()
{
	Number obj,var;
	obj.scan();
	obj.print();
	var.scan();
	var.print();
	return 0;
}
