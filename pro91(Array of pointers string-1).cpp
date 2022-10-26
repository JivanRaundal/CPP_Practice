// 		ARRAY OF POINTERS WITH STRINGS
// example-1]. Create array of pointers which stores base addresses of strings.

#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char *p;
	char str[100];
	cout<<"\nEnter string = ";
	cin.getline(str,98,'\n');
	int length;
	length = strlen(str);
	p = new char[length+1];
	strcpy(p,str);
	return p;
}

int main()
{
	char *ptr[3];
	int i;
	for(i=0; i<3; i++)
	{
		ptr[i] = create();
	}
	
	//print strings
	cout<<"\nStrings are :\n";
	for(i=0; i<3; i++)
	{
		cout<<"\n\t"<<ptr[i];
	}
	
	//delete
	for(i=0; i<3; i++)
	{
		delete ptr[i];
	}
	return 0;
}
