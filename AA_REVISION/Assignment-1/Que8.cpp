// Q.8]

#include<iostream>
using namespace std;

int main()
{
	int num[8] = {8,7,6,5,4,3,2,1};
	cout<<"\nBefore Sorting\n";
	int i,j;
	for(i=0; i<8; i++)
	{
		cout<<" "<<num[i];
	}
	//sorting
	for(i=0; i<8; i++)
	{
		for(j=i+1; j<8; j++)
		{
			if(num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout<<"\nAfter Sorting\n";
	for(i=0; i<8; i++)
	{
		cout<<" "<<num[i];
	}
	return 0;
}
