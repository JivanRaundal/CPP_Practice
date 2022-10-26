// Q 6]. WAP to find addition of first n natural numbers recursively.

#include<iostream>
using namespace std;

int sum(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		//return x + sum(x-1); OR
		int y;
		y = sum(x-1);
		return x+y;
	}
}

int main()
{
	int n, add;
	cout<<"\nEnter the number : ";
	cin>>n;
	add = sum(n);
	cout<<"\nAddition of first "<<n<<" natural numbers is : "<<add;
	return 0;
}
