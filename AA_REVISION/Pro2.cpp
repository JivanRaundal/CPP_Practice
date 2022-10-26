
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
		cout<<" "<<*(p+ind);
		print(p, ind+1);
	}
}

int main()
{
	int arr[8] = {1,2,3,4,5,6,7,8};
	cout<<"\nPrinting array recursively :\n";
	print(arr,0);
	return 0;
}
