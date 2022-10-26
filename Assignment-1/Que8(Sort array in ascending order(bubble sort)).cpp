// 8. scan 8 integers from user in an array. sort them in ascending order.

#include<iostream>
using namespace std;

int main()
{
	int num[8];

	
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<8; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	int temp;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<(8-i)-1; j++)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	
	cout<<"\n\nSORTED ARRAY IN ASCENDING ORDER IS : \n";
	for(int i=0; i<8; i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
