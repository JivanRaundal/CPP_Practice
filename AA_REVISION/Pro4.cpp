
#include<iostream>
using namespace std;

void print(int * p,int ind)
{
	if(ind == 8)
	{
		return;
	}
	else
	{
		print(p, ind+1);
		cout<<" "<<*(p+ind);
	}
}

void scan(int* p,int ind)
{
	if(ind == 8)
	{
		return;
	}
	else
	{
		cin>>*(p+ind);
		scan(p,ind+1);
	}
}

int main()
{
	int arr[8];
	cout<<"\nEnter Array elements :\n";
	scan(arr,0);
	cout<<"\nPrinting array recursively in reverse order :\n";
	print(arr,0);
	return 0;
}
