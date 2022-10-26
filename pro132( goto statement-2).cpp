//				GOTO STATEMENT
// example 2nd syntax:-


#include<iostream>
using namespace std;

void print()
{
	int n=1;
	label:
		cout<<"\n"<<n;
		n++;
		if(n<=10)
		{
			goto label;
		}
}
int main()
{
	print();
	return 0;
}
