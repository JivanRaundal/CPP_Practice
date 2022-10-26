/* 8]
		54321
		5432
		543
		54
		5
*/

#include<iostream>
using namespace std;

// 1] using for loop.

/*int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}*/

// 2] using while loop.

int main()
{
	int i,j;
	
	i=1;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			cout<<j;
			j--;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}
