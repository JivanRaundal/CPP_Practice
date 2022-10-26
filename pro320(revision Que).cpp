// Q. Keep Scanning String from user Until user enters STOP. print length of each string.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nKeep Entering Strings :\n";
	
	while(1)
	{
		cin.getline(str,98,'\n');
		if(strcmp(str,"STOP")==0)
		{
			break;
		}
		cout<<"\nLength = "<<strlen(str)<<endl;
	}
	return 0;
}
