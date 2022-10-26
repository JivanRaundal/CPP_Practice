#include<iostream>
using namespace std;

int count(int * p,int n);

int main()
{
	int num[5] = {2,4,3,6,8};
	cout<<"\nTotal even elements in array = "<<count(num,5);
	return 0;
}

int count(int *p,int n)
{
	int i,count=0;
	for(i=0; i<n; i++)
	{
		if(*(p+i) % 2 == 0)
		{
			count++;
		}
	}
	return count;
}
