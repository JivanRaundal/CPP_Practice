#include<iostream>
using namespace std;

int main()
{
	int num[8] = {1,2,3,6,3,3,4,3};
	int * p = num;
	int i,count=0;
	for(i=0; i<8; i++)
	{
		if(*(p+i) == 3)
		{
			count++;
		}
	}
	cout<<"\nCount = "<<count;
	return 0;
}
