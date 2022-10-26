/* 7]
		1
		21
		321
		4321
		54321
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
