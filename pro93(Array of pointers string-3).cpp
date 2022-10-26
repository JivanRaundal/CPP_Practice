//				ARRAY OF POINTERS USING STRINGS
//example-3]. scan6 city names from user, store them without using any memory, search pune in your arrat of cities.

#include<iostream>
#include<string.h>
using namespace  std;

char* create()
{
	char *p;
	char str[100];
	cout<<"\nEnter city name : ";
	cin.getline(str,98,'\n');
	int length;
	length = strlen(str);
	p = new char[length+1];
	strcpy(p,str);
	return p;
}

int main()
{
	char *city[6];
	
	int i;
	for(i=0; i<6; i++)
	{
		city[i] = create();
	}
	
	//printing cities
	cout<<"\n\nCities are :\n";
	for(i=0; i<6; i++)
	{
		cout<<"\n\t"<<city[i];
	}
	
	//searching pune
	char search[5] = "Pune";
	int x;
	for(i=0; i<6; i++)
	{
		x = strcmp(search, city[i]);
		if(x==0)
		{
			cout<<"\n\nPune Found.";
			break;
		}
	}
	if(x!=0)	//or if(i==6);
	{
		cout<<"\n\nPune Not Found.";
	}
	
	//deleting
	for(i=0; i<6; i++)
	{
		delete city[i];
	}
	return 0;
}
