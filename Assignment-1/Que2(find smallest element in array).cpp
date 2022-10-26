// 2. scan 8 integers from user. find the smallest value.(using pointer)

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int *p = &num[0];
	
	for(int i=0; i<8; i++)
	{
		cout<<"\nEnter element "<<i+1<<" : ";
		cin>>*(p+i);
	}
	
	int min = num[0];
	for(int i=1; i<8; i++)
	{
		if(num[i]<min)
		{
			min = num[i];
		}
	}
	
	cout<<"\n\nSmallest element is : "<<min;
	return 0;
}
