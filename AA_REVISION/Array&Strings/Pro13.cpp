
#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char str[100];
	//cout<<"\nEnter String : ";
	cin.getline(str,98,'\n');
	int len = strlen(str);
	char * p = new char[len+1];
	strcpy(p, str);
	return p;
}

int main()
{
	char* city[6];
	int i;
	cout<<"\nEnter city names :\n";
	for(i=0; i<6; i++)
	{
		city[i] = create();
	}
	cout<<"\n\nPrinting Cities\n";
	for(i=0; i<5; i++)
	{
		cout<<"\n"<<city[i];
	}
	cout<<"\n";
	int x;
	char str[] = "pune";
	//find if pune is present or not
	for(i=0; i<6; i++)
	{
		x = strcmp(str, city[i]);
		if(x == 0)
		{
			cout<<"\nFound";
			break;
		}
	}
	if(x != 0)
	{
		cout<<"\nNot Found";
	}
	
	for(i=0; i<6; i++)
	{
		delete[] city[i];
	}
	return 0;
}
