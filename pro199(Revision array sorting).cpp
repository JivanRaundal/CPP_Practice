// Revision:-
// Q. scan 8 integers from user & sort them in ascending order.

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int i,j;
	
	cout<<"\nInput Array\n";
	for(i=0; i<8; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>num[i];
	}
	
	//sorting
	int temp;
	for(i=0; i<8; i++)
	{
		for(j=i+1; j<8; j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;	
			}
		}
	}
	
	cout<<"\nSorted array\n";
	for(i=0; i<8; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}
