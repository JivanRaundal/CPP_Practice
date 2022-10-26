// Q. Scan a string from user and print it in reverse order.

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
		print(p, i+1);
		cout<<" "<<*(p+i);
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
