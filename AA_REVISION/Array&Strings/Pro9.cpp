
#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char str[100];
	cout<<"\nEnter String : ";
	cin.getline(str,98,'\n');
	int len = strlen(str);
	char * p = new char[len+1];
	int i=0;
	//strcpy(p, str);
	while(str[i] != '\0')
	{
		*(p+i) = str[i];
		i++;
	}
	*(p+i) = '\0';
	return p;
}

int main()
{
	char * str;
	str = create();
	cout<<"\nString = "<<str;
	return 0;
}
