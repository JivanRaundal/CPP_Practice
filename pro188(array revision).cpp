// Revision:-
// Q. Scan num array from user & find largest value in array. In main() function only.

#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int i;
	//scanning array
	cout<<"\nInput Array\n";
	for(i=0; i<5; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>num[i];
	}
	
	//finding maximum value
	int max = num[0];
	for(i=0; i<5; i++)
	{
		if(num[i] > max)
		{
			max = num[i];
		}
	}
	cout<<"\nMaximum = "<<max;
	return 0;
}
