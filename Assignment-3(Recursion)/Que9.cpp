// Q 9]. Find first n fibonacci terms using recursion.

#include<iostream>
using namespace std;

void fibo(int x,int n)
{
	static int n1=0, n2=1, n3=0;
	if(x==n+1)
	{
		return;
	}
	else
	{
		cout<<" "<<n1;
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		fibo(x+1,n);
	}
}

int main()
{
	int num;
	cout<<"\nEnter the number : ";
	cin>>num;

	cout<<"\nFirst "<<num<<" fibonacci terms are : ";
	fibo(1, num);
	return 0;
}
