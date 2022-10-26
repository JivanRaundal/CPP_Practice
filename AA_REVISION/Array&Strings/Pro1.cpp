// scan & print array of 5 int

#include<iostream>
using namespace std;

int main()
{
	int num[5];
	cout<<"\nEnter elements of array :\n";
	for(int i=0; i<5; i++)
	{
		cin>>num[i];
	}
	cout<<"\nPrinting Array :\n";
	for(int i=0; i<5; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}
