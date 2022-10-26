// Revision:-
// Q. scan n integers from user and print their addition.

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nHow many integers you want ? ";
	cin>>n;
	
	int *p;
	p = new int[n];
	
	int i;
	cout<<"\nInput Array\n";
	for(i=0; i<n; i++)
	{
		cout<<"\nElement "<<i<<" : ";
		cin>>*(p+i);
	}
	
	cout<<"\n\nPrinting Array\n";
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	//addition of all elements
	int sum = 0;
	for(i=0; i<n; i++)
	{
		sum = sum + *(p+i);
	}
	cout<<"\nAddition = "<<sum;
	
	delete[] p;
	return 0;
}
