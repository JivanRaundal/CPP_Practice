// Q.9]

#include<iostream>
using namespace std;

void fibo(int n,int i)
{
	static int t1=0,t2=1,t3=0;
	if(i == n)
	{
		return;
	}
	else
	{
		cout<<" "<<t1;
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		fibo(n, i+1);
	}
}

int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	cout<<"\nFibonacci Sequence :\n";
	fibo(n,0);
	return 0;
}
