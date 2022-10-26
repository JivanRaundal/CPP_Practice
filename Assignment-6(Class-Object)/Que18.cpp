// Q 18] scan 6 cities from user using 2-D array. print all those cities which starts with 'A'.

#include<iostream>
using namespace std;

int main()
{
	char city[6][20];	// 2-D array
	int i;
	cout<<"\nEnter the names of cities\n";
	for(i=0; i<6; i++)
	{
		cout<<"\nEnter "<<i+1<<" city name : ";
		cin.getline(&city[i][0], 18, '\n');
	}
	
	cout<<"\n\nTotal Cities are\n";
	for(i=0; i<6; i++)
	{
		cout<<"\n"<<i+1<<") "<<&city[i][0];
	}
	
	//printing cities whose name starts with 'A'
	cout<<"\n\nCities whose name starts with 'A' are :";
	for(i=0; i<6; i++)
	{
		if(city[i][0] == 'A')
		{
			cout<<"\n	"<<&city[i][0];
		}
	}
	return 0;
}
