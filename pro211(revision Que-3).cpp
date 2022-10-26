//	Revision:-
// Q. scan 2 strings and check if they are equal or not. In main() only.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	
	cout<<"\nEnter string 1 : ";
	cin.getline(str1,98,'\n');
	cout<<"\nEnter string 2 : ";
	cin.getline(str2,98,'\n');
	
	cout<<"\nString 1 = "<<str1;
	cout<<"\nString 2 = "<<str2;
	
	int x;
	x = strcmp(str1, str2);
	if(x==0)
	{
		cout<<"\nStrings are equal.";
	}
	else
	{
		cout<<"\nStrings are not equal.";
	}
	return 0;
}
