// Q 9].

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str, 98, '\n');
	cout<<"\nYou entered : "<<str;
	
	int i=0; 
	while(str[i] != '\0')
	{
		i++;
	}
	cout<<"\nLength of string is : "<<i;
	return 0;
}
