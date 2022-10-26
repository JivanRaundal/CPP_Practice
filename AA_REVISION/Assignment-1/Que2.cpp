//Q.2]

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int * p = &num[0];			//OR int * p = num;
	int i;
	cout<<"\nEnter elements \n";
	for(i=0; i<8; i++)
	{
		cin>>*(p+i);
	}
	int min = *(p+0);
	for(i=0; i<8; i++)
	{
		if(min > *(p+i))
		{
			min = *(p+i);
		}
	}
	cout<<"\nSmallest value = "<<min;
	return 0;
}
