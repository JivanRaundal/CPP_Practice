/* 10]
		12345
		1234
		123
		12
		1
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}

// OR
/*
int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=(6-i); j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
*/
