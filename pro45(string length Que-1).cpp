//Q. Scan a string from user, find its length excluding '\0'.

#include<iostream>
using namespace std;

int main()
{
	char str[30];
	
	cout<<"\nEnter string : ";
	cin.getline(str, 28);
	cout<<"\nYou entered : "<<str;
	
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	cout<<"\n\nLength of string is : "<<i;
	return 0;
}
