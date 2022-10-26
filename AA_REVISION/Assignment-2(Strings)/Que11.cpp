// Q.11]

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30];
	char str2[30];
	char temp[30];
	cout<<"\nEnter 2 Strings :\n";
	cin.getline(str1,28,'\n');
	cin.getline(str2,28,'\n');
	cout<<"\nBefore Swapping :\n";
	cout<<str1<<"\n"<<str2;
	
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	
	cout<<"\n\nAfter Swappinh :\n";
	cout<<str1<<"\n"<<str2;
	return 0;
}
