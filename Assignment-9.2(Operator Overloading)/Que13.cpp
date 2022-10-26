// Q 13]. Scan 6 cities name from user. sort them in ascending order. print them.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string city[6];
	string temp;
	
	int i,j;
	for(i=0; i<6; i++)
	{
		cout<<"\nEnter city "<<i+1<<" : ";
		getline(cin,city[i]);
	}
	
	cout<<"\nBefore sorting cities are :\n";
	for(i=0; i<6; i++)
	{
		cout<<i+1<<". "<<city[i]<<endl;
	}
	
	//sorting cities based on name
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if(city[i] > city[j])
			{
				temp    = city[i];
				city[i] = city[j];
				city[j] = temp;
			}
		}
	}
	
	cout<<"\nAfter sorting cities are :\n";
	for(i=0; i<6; i++)
	{
		cout<<i+1<<". "<<city[i]<<endl;
	}
	return 0;
}
