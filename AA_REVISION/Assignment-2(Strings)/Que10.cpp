// Q.10]

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	cout<<"\nEnter 2 String :\n";
	cin.getline(str1,18,'\n');
	cin.getline(str2,18,'\n');
	
	int x = strcmp(str1,str2);
	if(x == -1)
	{
		cout<<"\n"<<str1<<" will go first";
	}
	else if(x == 1)
	{
		cout<<"\n"<<str2<<" will go first";
	}
	else
	{
		cout<<"\nBoth are same anyone can go first";
	}
	return 0;
}
