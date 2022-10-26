//Q.1]

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	int i;
	cout<<"\nEnter array elements \n";
	for(i=0; i<10; i++)
	{
		cin>>num[i];
	}
	int max = num[0];
	for(i=0; i<10; i++)
	{
		if(max < num[i])
		{
			max = num[i];
		}
	}
	cout<<"\nLargest element = "<<max;
	return 0;
}
