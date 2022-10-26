// Fibonacci using recursion.

#include<iostream>
using namespace std;

void fibo(int n1,int n2,int num,int i)
{
	if(i==num+1)
	{
		return;
	}
	else
	{
		cout<<" "<<n1;
		int n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		fibo(n1,n2,num,i+1);
	}
}

int main()
{
	int num;
	int n1,n2;
	n1 = 0;
	n2 = 1;
	cout<<"\nEnter the number : ";
	cin>>num;
	cout<<"\nFirst "<<num<<" fibonacci terms are :\n";
	fibo(n1,n2,num,1);
	return 0;
}
