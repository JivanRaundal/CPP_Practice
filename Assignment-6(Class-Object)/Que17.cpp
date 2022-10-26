// Q 17] scan 6 cities from user using array of pointers. Count how many times PUNE is present in the list.

#include<iostream>
#include<string.h>
using namespace std;

char* get_city()
{
	char str[20];
	char *p;
	cout<<"\nEnter city name : ";
	cin.getline(str,18,'\n');
	int length;
	length = strlen(str);
	p = new char[length+1];
	strcpy(p, str);
	return p;
}

int main()
{
	char * city[6];	//array of pointers
	int i;
	//scanning cities
	for(i=0; i<6; i++)
	{
		city[i] = get_city();
	}
	
	//printing cities
	cout<<"\n\nCities are :\n";
	for(i=0; i<6; i++)
	{
		cout<<"\n"<<i+1<<") "<<city[i];
	}
	
	//searching pune
	int x, count=0;
	char search[] = "Pune";
	
	for(i=0; i<6; i++)
	{
		x = strcmp(search, city[i]);	//comparing two strings
		if(x==0)	//if both strings are equal x=0, else x=-1 OR x=+1;
		{
			count++;
		}
	}
	cout<<"\nPune is present "<<count<<" times.";
	
	//deleting runtime memory
	for(i=0; i<6; i++)
	{
		delete[] city[i];
	}
	return 0;
}
