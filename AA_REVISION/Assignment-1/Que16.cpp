// Q.16]

#include<iostream>
using namespace std;

void print(int x,int y)
{
	cout<<"\nPrinting odd numbers\n";
	int i;
	for(i=x; i<=y; i++)
	{
		if(i % 2 != 0)
		{
			cout<<" "<<i;
		}
	}
}

int main()
{
	int a,b;
	cout<<"\nEnter range : ";
	cin>>a>>b;
	
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	print(min, max);
	
	return 0;
}
