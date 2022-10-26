/* 13. D]
		----E
		---DE
		--CDE
		-BCDE
		ABCDE
*/

#include<iostream>
using namespace std;

int main()
{
	char i,j,k;
	for(i='E'; i>='A'; i--)
	{
		for(k='A'; k<i; k++)
		{
			cout<<"-";
		}
		for(j=i; j<='E'; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
