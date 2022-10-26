//			CLASS & OBJECT
// ARRAY WITHIN CLASS :-
// example:-

#include<iostream>
using namespace std;

class Number
{
	public:
		int num[5];
};
//scan & print array num[] of class Number in main() function
int main()
{
	Number obj,var;
	int i;
	cout<<"\nEnter Elements\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>obj.num[i];
	}
	
	cout<<"\nPrinting array element\n";
	for(i=0; i<5; i++)
	{
		cout<<" "<<obj.num[i];
	}
	return 0;
}
