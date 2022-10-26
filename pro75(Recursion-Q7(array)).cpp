//  Q. print given arrray recursively.

#include<iostream>
using namespace std;

void print(int *p, int index)
{
	if(index==5)
	{
		return;
	}
	else
	{
		cout<<" "<<*(p+index);
		print(p, index+1);
	}
}

int main()
{
	int arr[5] = {10,20,30,40,50};
	print(arr,0);
	return 0;
}
