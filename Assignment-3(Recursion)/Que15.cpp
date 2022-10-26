// Q 15]. Find length of string recursively.

#include<iostream>
using namespace std;

void length(char *p, int i)
{
	if(*(p+i)=='\0')
	{
		cout<<"\nLength = "<<i;
		return;
	}
	else
	{
		length(p, i+1);
	}
}

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');

	length(str,0);
	return 0;
}
