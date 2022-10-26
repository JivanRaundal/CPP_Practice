// Q.14]

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50];
	cout<<"\nKeep entering string OR type STOP to stop :\n";
	do
	{
		cin.getline(str,48,'\n');
	}while(strcmp(str,"STOP") != 0);
	return 0;
}
