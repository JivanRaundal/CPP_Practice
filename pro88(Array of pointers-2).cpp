// 					ARRAY OF POINTERS
//example-2

#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	int *ptr[5];
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	ptr[3] = &d;
	ptr[4] = &e;
	
	int i;
	cout<<"\nEnter values :\n";
	for(i=0; i<5; i++)
	{
		cin>>*ptr[i];
	}
	
	cout<<"\n\nDisplay values :\n";
	for(i=0; i<5; i++)
	{
		cout<<" "<<*ptr[i];
	}
	return 0;
}
