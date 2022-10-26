/* 12]
		1
		22
		333
		4444
		55555
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<i;		// instead of j print i.
		}
		cout<<"\n";
	}
	return 0;
}

// OR
/*
int main()
{
	int i,j, x=1;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<x;
		}
		x++;
		cout<<"\n";
	}
	return 0;
}
*/
