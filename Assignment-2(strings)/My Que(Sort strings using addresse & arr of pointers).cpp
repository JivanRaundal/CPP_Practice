// Q. Array of pointers. Scan 3 strings from user. Store them without wasting a single byte of memory.
//    Sort them in ascending order alphabetically.

#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	int length;
	length = strlen(str);
	char *p;
	p = new char[length+1];
	strcpy(p, str);
	return p;
}

int main()
{
	char *ptr[3];	//array of pointers
	int i,j;
	for(i=0; i<3; i++)
	{
		ptr[i] = create();
	}
	
	cout<<"\n\nBefore sorting strings are :\n";
	for(i=0; i<3; i++)
	{
		cout<<"\nstring "<<i+1<<" : "<<ptr[i];
	}
	
	//sorting strings alphabetically by addresses only
	int x;
	char *temp;
	for(i=0; i<3; i++)
	{
		for(j=i+1; j<3; j++)
		{
			x = strcmp(ptr[i], ptr[j]);
			if(x==1)
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;	
			}
		}
	}
	cout<<"\n\nStrings after sorting are :\n";
	for(i=0; i<3; i++)
	{
		cout<<"\nstring "<<i+1<<" : "<<ptr[i];
	}
	
	//deleting runtime memory
	for(i=0; i<3; i++)
	{
		delete []ptr[i];
	}
	return 0;
}
