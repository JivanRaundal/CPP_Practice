// Tables

#include<iostream>
using namespace std;

int main()
{
	for(int j=15; j<=20; j++)
	{
		cout<<"\nTable of "<<j<<" :\n";
		int tab;
		for(int i=1; i<=10; i++)
		{
			tab = j * i;
			cout<<"\n"<<j<<" x"<<i<<" : "<<tab;
		}
		cout<<"\n\n";
	}

	return 0;
}
