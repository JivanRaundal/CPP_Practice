//  Q. Scan string from user, print it recursively.

#include<iostream>
using namespace std;

void print(char *p,int i)
{
	if(*(p+i)=='\0')
	{
		return;
	}
	else
	{
		cout<<" "<<*(p+i);
		print(p, i+1);
	}
}

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	print(str,0);
	return 0;
}
