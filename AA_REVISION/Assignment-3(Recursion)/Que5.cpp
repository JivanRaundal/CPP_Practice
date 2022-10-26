// Q.5]

#include<iostream>
using namespace std;

int add(int x)
{
	if(x == 5)
	{
		return x;
	}
	else
	{
		return x + add(x+1);
	}
}

int main()
{
	int ans;
	ans = add(1);
	cout<<"\nAddition = "<<ans;
	return 0;
}
