// Q 13]. Scan array of n integers from user. Find the largest value. (Do not use recursion)

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nHow many integers you want? ";
	cin>>n;
	
	int *p;
	p = new int[n];
	cout<<"\nINPUT ARRAY :\n";
	int i;
	for(i=0; i<n; i++)
	{
		cout<<"\nelement "<<i<<" : ";
		cin>>*(p+i);
	}
	
	//finding largest value
	int large;
	large = *(p+0);
	
	for(i=0; i<n; i++)
	{
		if(*(p+i) > large)
		{
			large = *(p+i);
		}
	}
	cout<<"\nLargest value in Arrray is : "<<large;
	
	//deleting p
	delete[] p;
	return 0;
}
