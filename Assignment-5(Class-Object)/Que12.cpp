// Q 12]. Scan array of 6 characters from user and print it. (Do not use recursion)

#include<iostream>
using namespace std;

int main()
{
	char arr[6];
	cout<<"\nInput character array :\n";
	int i;
	for(i=0; i<6; i++)
	{
		cout<<"\nCharacter "<<i<<" : ";
		cin>>arr[i];
	}
	
	cout<<"\n\nPrinting character array :\n{";
	for(i=0; i<6; i++)
	{
		cout<<" '"<<arr[i]<<"'";
	}
	cout<<" }";
	return 0;
}
