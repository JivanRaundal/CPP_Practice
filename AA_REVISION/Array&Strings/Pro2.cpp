#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int * p = num;		//OR int * p = &num[0];
	cout<<"\nEnter elements\n";
	int i;
	for(i=0; i<5; i++)
	{
		cin>>*(p+i);
	}
	cout<<"\nPrinting\n";
	for(i=0; i<5; i++)
	{
		cout<<" "<<*(p+i);
	}
	return 0;
}
