// Q. Scan a string from user and, replace every occurence of 'a' & 'A' by 'X' recursively and print
//    your string in main() fun.

#include<iostream>
using namespace std;

void replace(char *p,int i)
{
	if(*(p+i)=='\0')
	{
		return;
	}
	else
	{
		if(*(p+i)=='a' || *(p+i)=='A')
		{
			*(p+i) = 'X';
		}
		replace(p, i+1);
	}
}

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	replace(str, 0);
	cout<<"\nString after replacing is = "<<str;
	return 0;
}
