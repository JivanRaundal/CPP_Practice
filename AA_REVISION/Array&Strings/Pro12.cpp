// Array of Pointers

#include<iostream>
using namespace std;

int main()
{
	int* ptr[5];
	
	int i;
	cout<<"\nEnter elements\n";
	for(i=0; i<5; i++)
	{
		ptr[i] = new int();
		cin>>*ptr[i];
	}
	cout<<"\nPrinting\n";
	for(i=0; i<5; i++)
	{
		cout<<" "<<*ptr[i];
	}
	
	for(i=0; i<5; i++)
	{
		delete ptr[i];
	}
	return 0;
}
