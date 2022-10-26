//search element in array recursively

#include<iostream>
using namespace std;

void search(int* p,int ind)
{
	if(ind == 8)
	{
		cout<<"\nNot Found";
		return;
	}
	else if(*(p+ind) == 40)
	{
		cout<<"\nFound";
		return;
	}
	else
	{
		search(p, ind+1);
	}
}

int main()
{
	int arr[8] = {10,20,30,40,50,60,70,80};
	cout<<"\nPrinting array recursively :\n";
	search(arr,0);
	return 0;
}
