// Q 14]. Scan a string from user. Find its length. (Do not use recursion)

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	cout<<"\nLength of string = "<<i;
	return 0;
}
