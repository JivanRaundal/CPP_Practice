// scan and print array using extra pointer.
// NOTE:- You can do, p = p+1 in case of pointers.

#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int *p;
	p = &num[0];
	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>*(p+i);
	}
	
	cout<<"\n\nYOUR ARRAY IS : ";
	cout<<"\n{ ";
	for(int i=0; i<5; i++)
	{
		cout<<*(p+i)<<", ";	
	}
	cout<<"}\n";
	return 0;
}
