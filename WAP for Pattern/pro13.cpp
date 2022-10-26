/* 13]
		5
		45
		345
		2345
		12345
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=i; j<=5; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
