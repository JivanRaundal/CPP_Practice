/* Butterfly Pattern :-

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter number of rows : ";
	cin>>n;
	cout<<endl;
	
	//for above half
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		int spaces = (2*n - 2*i);
		for(int j=1; j<=spaces; j++)
		{
			cout<<"  ";	
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	//for below half  (same as above only i=n; i>=1; i--)(i.e. rows are decreased)
	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		int spaces = (2*n - 2*i);
		for(int j=1; j<=spaces; j++)
		{
			cout<<"  ";	
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	return 0;
}
