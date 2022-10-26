/* 5]
		5
		54
		543
		5432
		54321
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=5; j>=i; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
