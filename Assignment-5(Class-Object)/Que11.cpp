// Q 11]. Scan an array of 10 integers from user. Pass this array to function add() to perform addition of all
//        elements of array. (Do not use recursion)

#include<iostream>
using namespace std;

void add(int *p)
{
	int i, sum=0;
	for(i=0; i<10; i++)
	{
		sum = sum + *(p+i);
	}
	cout<<"\nAddition of all elements or array is : "<<sum;
}

int main()
{
	int arr[10];
	cout<<"\nINPUT ARRAY :\n";
	int i;
	for(i=0; i<10; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>arr[i];
	}
	
	add(arr);
	return 0;
}
