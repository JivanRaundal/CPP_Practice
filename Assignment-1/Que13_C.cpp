/* 13. C]
		E
		DE
		CDE
		BCDE
		ABCDE
*/

#include<iostream>
using namespace std;

int main()
{
	for(char i='E'; i>='A'; i--)
	{
		for(char j=i; j<='E'; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
