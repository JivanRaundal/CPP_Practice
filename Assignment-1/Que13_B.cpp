/* 13. B]
		ABCDE
		ABCD
		ABC
		AB
		A
*/

#include<iostream>
using namespace std;

int main()
{
	for(char i='E'; i>='A'; i--)
	{
		for(char j='A'; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
