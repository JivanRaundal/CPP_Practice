// Q 5].

#include<iostream>
using namespace std;

int add(int x);

int main()
{
	int ans;
	ans = add(1);
	cout<<"\nAddition of 1 to 5 numbers is = "<<ans;
	return 0;
}

int add(int x)
{
	if(x > 5)	//OR if(x == 6)
	{
		return 0;
	}
	return x + add(x+1);
}
