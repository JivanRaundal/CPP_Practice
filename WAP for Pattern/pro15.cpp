/* 15]
		EDCBA
		DCBA
		CBA
		BA
		A
*/

#include<iostream>
using namespace std;

// 1] using char datatype
int main()
{
	char i,j;
	for(i='E'; i>='A'; i--)
	{
		for(j=i; j>='A'; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}

// 2] using ASCII value & Typecasting
/*
int main()
{
	int i,j;
	for(i=69; i>=65; i--)
	{
		for(j=i; j>=65; j--)
		{
			cout<<char(j);
		}
		cout<<"\n";
	}
	return 0;
}
*/
