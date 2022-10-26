//						ARRAY OF POINTERS
//example-3]. Use runtime memory allocation and assgn addresses of variables to array of pointers.

#include<iostream>
using namespace std;

int main()
{
	int *ptr[3];
	int i;
	for(i=0; i<3; i++)
	{
		ptr[i] = new int();
	}
	cout<<"\nEnter values :\n";
	for(i=0; i<3; i++)
	{
		cin>>*ptr[i];
	}
	cout<<"\n\nDisplay values :\n";
	for(i=0; i<3; i++)
	{
		cout<<" "<<*ptr[i];
	}
	
	// not need but for understanding.
	// deleting each runtime variable.
	for(i=0; i<3; i++)
	{
		delete ptr[i];
	}
	return 0;
}
