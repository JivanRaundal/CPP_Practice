// Q. Declare and initialize array of 8 integers. Search 10 in array recursively.
//	In this example there are 2 terminating conditions.
//			1] element not found
//			2] element fount

#include<iostream>
using namespace std;

void search(int *p,int i)
{
	if(i==8)			//1st terminating condition
	{
		cout<<"\n10 not Found:(";
		return;
	}
	else if(*(p+i)==10)		//2nd terminating condition
	{
		cout<<"\n10 Found:)";
		return;
	}
	else
	{
		search(p, i+1);
	}
}

int main()
{
	int arr[8] = {67, 86, 23, 10, 33, 90, 56, 60};
	search(arr, 0);
	return 0;
}
