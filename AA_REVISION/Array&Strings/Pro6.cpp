//scan string & find it's length

#include<iostream>
using namespace std;

int Length(char * s)
{
	int i=0;
	while(*(s+i) != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char str[50];
	cout<<"\nEnter String : ";
	cin.getline(str,48,'\n');
	cout<<"\nString = "<<str;
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	cout<<"\nLength = "<<i;
	cout<<"\nLength = "<<Length(str);
	return 0;
}
