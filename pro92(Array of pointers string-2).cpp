//					ARRAY OF POINTERS WITH STRINGS
//exapmle-2]. Scan 6 city names from user, print them. Do not waste a single byte of memory.

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
	
	//deleting
	for(i=0; i<6; i++)
	{
		delete city[i];
	}
	return 0;
}
